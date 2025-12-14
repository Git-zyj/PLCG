/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208940
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2500014324U)) || (((/* implicit */_Bool) 2500014324U)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 0)) : (var_7))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-32755))))))) : (((/* implicit */int) ((((/* implicit */int) (short)32760)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (var_15)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((((/* implicit */int) (unsigned char)0)) >= (((((/* implicit */_Bool) 17611434139507816920ULL)) ? (((/* implicit */int) (short)-28032)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) var_13);
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
                        arr_12 [i_0] [i_1] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */short) ((arr_7 [i_0 + 1] [i_1] [i_0 - 1]) == (arr_7 [i_0 - 1] [i_1] [i_0 - 1])));
                    }
                } 
            } 
            var_21 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
        }
        for (short i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
        {
            arr_16 [i_4] = (i_4 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (3588282409U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30702))))))))) >> (((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_3 [i_0 + 1] [i_4] [i_4 + 1])))) + (28063)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (3588282409U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30702))))))))) >> (((((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_3 [i_0 + 1] [i_4] [i_4 + 1])))) + (28063))) - (3523))))));
            var_22 = ((/* implicit */_Bool) ((unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) (signed char)-101)))) || (((/* implicit */_Bool) 3588282395U)))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned short)0))));
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)65356))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-16))))) : (arr_7 [i_4] [i_4] [(unsigned char)10])))));
            var_25 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) 4111604472U)) || (var_9)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [6U])) || (((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_4] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) var_8))));
        }
        for (short i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
        {
            arr_20 [i_0] [i_0 - 1] [i_5] = ((/* implicit */short) arr_0 [i_0]);
            arr_21 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? ((-(7526857568119464216ULL))) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_5] [i_0 - 1]))))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_5])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-101)), ((unsigned char)0)))))))));
            var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (arr_18 [i_5]))), ((-(arr_18 [i_5])))));
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_3 [(_Bool)0] [(unsigned short)6] [i_0 + 1]))));
        var_28 |= ((/* implicit */short) min((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) ((/* implicit */int) (short)12329))) ^ (arr_0 [i_0])))));
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_6] [i_6] [i_6] [i_6])), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6]))) : (max((((/* implicit */unsigned int) arr_1 [i_6] [11U])), (var_10))))))))));
        arr_25 [i_6] |= ((/* implicit */short) max(((+(((/* implicit */int) arr_2 [i_6] [i_6] [i_6])))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4294967276U))))), ((unsigned char)96))))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) 566837813U);
        var_31 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (short)28332)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_32 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [6U] [6U]))) / (arr_19 [i_8] [i_8]))) >= (((/* implicit */unsigned int) ((arr_2 [i_8] [i_8] [i_8]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))));
        var_33 += ((/* implicit */unsigned int) ((((_Bool) -478516445522122088LL)) || (((arr_18 [(_Bool)1]) >= (((/* implicit */unsigned long long int) 566837811U))))));
    }
    var_34 = max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)31504)) >= (((/* implicit */int) (unsigned char)7))))), ((unsigned short)31216));
    var_35 &= ((/* implicit */_Bool) ((max((((var_11) << (((/* implicit */int) var_3)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))) >> (((5809055876884236671LL) - (5809055876884236664LL)))));
}

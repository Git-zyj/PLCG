/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45951
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
    var_15 = ((/* implicit */signed char) 4108033089U);
    var_16 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((unsigned int) var_4))));
            arr_7 [(signed char)10] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) < (arr_2 [i_0] [i_0])));
            arr_8 [i_1] = ((/* implicit */unsigned int) (((+(arr_4 [i_0] [i_1]))) >= (arr_4 [i_0] [4LL])));
            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)14289)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)20318))))) >> (((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (14683072856110919447ULL)))));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(arr_0 [i_2]))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < ((-(arr_0 [i_2])))));
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1))))))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_18 [(short)0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-2090409286))))));
                    arr_19 [i_5] = ((/* implicit */int) var_3);
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned long long int) ((long long int) var_10))))));
                }
                for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    arr_23 [i_0] [(signed char)2] [1ULL] &= ((/* implicit */long long int) var_3);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (unsigned short)65535))));
                }
                arr_24 [i_3] = ((/* implicit */unsigned long long int) var_12);
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)57528)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65508)) > (((/* implicit */int) (short)12687)))))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (14410643745623918093ULL) : (arr_12 [i_0])))));
            }
            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_24 *= ((/* implicit */short) var_3);
                arr_27 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0] [i_7])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11)) / (((/* implicit */int) (short)32767)))))));
            }
            arr_28 [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_13)));
            arr_29 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)9476)) <= (((/* implicit */int) (_Bool)0))));
            arr_30 [i_0] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) -1300398567811828236LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) + (-8244268888391220992LL)))));
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_15 [i_0] [(unsigned short)14] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
    }
    for (unsigned int i_8 = 3; i_8 < 8; i_8 += 4) 
    {
        arr_34 [i_8] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)0))));
        arr_35 [i_8] [i_8] = var_7;
    }
    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
    {
        arr_38 [i_9] [i_9] = ((/* implicit */int) var_10);
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_37 [22ULL])))))));
    }
    var_27 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (((-(((/* implicit */int) var_12)))) != (((/* implicit */int) ((((/* implicit */_Bool) -8244268888391220992LL)) || (((/* implicit */_Bool) -1410192566)))))))) : (((/* implicit */int) (unsigned char)255)));
}

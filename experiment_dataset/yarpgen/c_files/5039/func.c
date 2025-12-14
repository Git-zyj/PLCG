/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5039
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */long long int) arr_1 [i_0])), (max((((/* implicit */long long int) var_19)), (-127483190641544509LL))))));
        var_21 = ((1118090062999342993ULL) << (((((/* implicit */_Bool) 8540987003708383346LL)) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) (unsigned char)0)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) arr_8 [i_0] [22] [i_1] [i_2] [i_2] [20]);
                        arr_10 [i_2] [21U] = ((/* implicit */unsigned long long int) max(((~((+(var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8540987003708383346LL)) ? (((int) arr_6 [i_2 - 2] [i_0])) : (((/* implicit */int) (short)-18)))))));
                        var_23 = ((/* implicit */int) (-(max((((/* implicit */long long int) arr_5 [i_2 + 1] [i_2 + 1] [11LL])), (-8540987003708383346LL)))));
                        var_24 = 16774020501457598770ULL;
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned int) arr_2 [i_4] [i_4]);
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */int) max((max((((/* implicit */unsigned char) arr_6 [i_4] [i_4])), (arr_9 [(_Bool)1] [i_4] [i_4] [i_4]))), (arr_4 [i_4] [i_4])))), (((int) (unsigned char)127)))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_4] [i_5 + 2])) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [14ULL] [(unsigned char)12])))))))) ? (arr_0 [1LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [22ULL])))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4] [13ULL] [i_4])) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_14 [(signed char)16] [i_5] [(unsigned short)11])))), (var_13)))) : (((arr_12 [i_4]) / (arr_12 [i_4])))));
            var_28 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_5])) ? (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [(_Bool)1]) : (((/* implicit */unsigned long long int) 8540987003708383346LL))))) && (((/* implicit */_Bool) (short)-25))))), (((((/* implicit */int) arr_15 [(short)22] [i_5] [i_4])) % (((/* implicit */int) arr_2 [(signed char)12] [i_5 + 3]))))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_29 = ((/* implicit */long long int) ((unsigned short) arr_15 [i_6] [i_6] [i_6]));
        var_30 &= ((/* implicit */int) (-(max((((/* implicit */long long int) max((arr_1 [i_6]), ((unsigned short)20114)))), (((var_18) ? (8540987003708383346LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_6])))))))));
        arr_20 [i_6] [(short)12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_16 [(signed char)0] [1LL]), (((/* implicit */unsigned long long int) (unsigned char)248))))) ? (((unsigned int) arr_15 [(unsigned char)3] [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_17)), ((unsigned char)248))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6] [(_Bool)1])))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (var_19) : (((/* implicit */int) arr_7 [10U] [17LL] [10U]))))))) ? ((~(((/* implicit */int) arr_19 [i_6] [i_6])))) : ((~(((/* implicit */int) max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1)))))))));
        var_32 |= ((/* implicit */unsigned long long int) ((unsigned int) var_2));
    }
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_9))));
}

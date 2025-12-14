/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41635
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
    var_20 += ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) max((var_7), (var_7)))) < (((/* implicit */int) ((unsigned char) (unsigned short)21445)))))), (var_18)));
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))), (((/* implicit */unsigned long long int) var_17))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0] [i_0])))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 226446616)) ? (7736854320273889898LL) : (-7736854320273889920LL)))) ? (arr_2 [(unsigned char)8]) : (((/* implicit */int) ((max((-7736854320273889899LL), (((/* implicit */long long int) arr_2 [i_0])))) >= (max((var_15), (((/* implicit */long long int) (unsigned char)221)))))))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1154689179)) ? (((/* implicit */int) ((signed char) min((((/* implicit */long long int) -1154689179)), (7736854320273889911LL))))) : (1025242337)));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3112576633U)) ? ((+(min((((/* implicit */unsigned int) (short)32751)), (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -1154689179)) < (6172215297032824101LL)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [i_2]), (arr_0 [i_2])))), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))) % (((-7736854320273889889LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))))));
                    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))) - (min((((/* implicit */unsigned long long int) var_16)), (max((arr_11 [i_0] [i_1] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_3 [2] [2]))))))));
                    var_26 |= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_0])))));
                }
                var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3420442526U)))) : (min((((/* implicit */unsigned int) var_13)), (arr_10 [0] [0] [i_1]))))) << (((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */long long int) 1154689179)) : (((((/* implicit */_Bool) arr_1 [3U])) ? (((/* implicit */long long int) arr_10 [11ULL] [i_0] [i_1])) : (var_19))))) - (1154689148LL)))));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2946672734U)))) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((int) 1154689179))))) : (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (7736854320273889915LL)))));
                var_29 *= ((/* implicit */signed char) 2147483637);
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-(min((max((((/* implicit */unsigned int) var_12)), (3214512962U))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) arr_2 [i_1])))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((signed char) max(((+(var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned char)5))))))));
    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))), (var_15))))))));
}

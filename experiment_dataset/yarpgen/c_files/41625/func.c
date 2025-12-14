/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41625
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [(signed char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned short) var_8))))), (((-13318233583647535LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (max((max((((/* implicit */unsigned int) var_7)), (var_4))), (((/* implicit */unsigned int) (unsigned short)11597)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)11604)))))));
                        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) max((max((((/* implicit */short) var_14)), (var_11))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11607)) || (((/* implicit */_Bool) var_15)))))))), ((+(-3824984110602299035LL)))));
                        var_17 -= ((/* implicit */unsigned int) (signed char)127);
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [9LL] = ((/* implicit */int) (unsigned char)224);
                        var_18 *= ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) (unsigned short)53939)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            arr_17 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11597)) ? (max((var_5), (((/* implicit */long long int) (unsigned short)65530)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_18 [i_0] [i_1] [i_2] [i_2 - 1] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)53938)), (-134934247)))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) (short)27338)))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((signed char) max(((unsigned short)53954), (((/* implicit */unsigned short) (unsigned char)224)))))), ((unsigned char)231)));
                            arr_21 [(unsigned char)10] [(unsigned char)10] = ((/* implicit */short) ((((/* implicit */_Bool) 3624349318U)) && (((/* implicit */_Bool) (unsigned short)53938))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) -758796158)))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11613)) ? (((/* implicit */int) (unsigned short)55379)) : (((/* implicit */int) var_9))));
                        }
                    }
                    arr_22 [13] [i_0] |= ((/* implicit */unsigned short) max((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))));
                    var_22 = ((unsigned int) ((long long int) ((int) (unsigned short)53928)));
                }
            } 
        } 
    } 
    var_23 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((int) 17643134352531729831ULL))) : (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_10)));
}

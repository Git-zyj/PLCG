/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39223
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [(short)11]))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (_Bool)0))))) ? ((((_Bool)0) ? (arr_6 [i_0] [i_0] [i_1] [(short)15]) : (((/* implicit */int) (unsigned short)59321)))) : (((((((/* implicit */int) max((((/* implicit */short) (signed char)-115)), ((short)-5)))) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0])) - (27)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [(signed char)6] [i_4] [i_3] = max((max((4294967287U), (((/* implicit */unsigned int) (signed char)43)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0] [i_0] [i_3 + 4] [i_4]) : (((/* implicit */int) var_11))))));
                                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_3 + 2] [i_1 - 1] [i_1 + 1] [i_1]), (((/* implicit */int) (unsigned char)82))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8828479103170264733LL)) ? (161818289) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_6 [i_3 + 3] [i_1 + 1] [(unsigned char)12] [(unsigned char)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1914207947U)))));
                                var_17 = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((161818289), (arr_9 [i_0] [i_3] [i_1] [(_Bool)1] [(short)2] [(_Bool)1] [i_4])))) ? (((((arr_8 [i_0] [i_3]) + (9223372036854775807LL))) << (((var_7) - (3751272543U))))) : (((/* implicit */long long int) arr_7 [i_4]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-112)), (574412594)))) : (18446744073709551590ULL)))))) : (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((161818289), (arr_9 [i_0] [i_3] [i_1] [(_Bool)1] [(short)2] [(_Bool)1] [i_4])))) ? (((((((arr_8 [i_0] [i_3]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_7) - (3751272543U))))) : (((/* implicit */long long int) arr_7 [i_4]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-112)), (574412594)))) : (18446744073709551590ULL))))));
                                var_18 *= ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_19 -= max((((/* implicit */unsigned long long int) arr_8 [(unsigned char)10] [i_2])), (arr_1 [13U]));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11282)) << (((12865937331907900682ULL) - (12865937331907900676ULL)))))) ? (((((685479093U) << (((3444358582U) - (3444358558U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3986678673U)) && (((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52756))))))));
    var_22 = ((/* implicit */signed char) max((-8828479103170264734LL), (((/* implicit */long long int) var_14))));
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -108306648))))))) * (max((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) 376525904)), (260046848U)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242219
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
    var_16 = var_8;
    var_17 |= ((/* implicit */signed char) min((((short) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_10)) - (56)))))), (var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) 
                            {
                                var_18 = max((((/* implicit */long long int) min((arr_6 [(short)6] [i_4 + 1] [i_2] [i_2]), (((/* implicit */unsigned short) (signed char)126))))), ((-(var_9))));
                                var_19 = ((/* implicit */long long int) var_6);
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_3 [i_1]))));
                                var_21 = ((/* implicit */short) ((2074971596426790609LL) >> (((/* implicit */int) var_2))));
                                var_22 = ((/* implicit */signed char) 6793983173815676261LL);
                            }
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-120)))))))))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_0] [i_2 + 2] [i_0 + 2] [6] [i_0]) : (arr_15 [i_0] [i_2 + 2] [i_0 + 2] [2LL] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_14) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)19))))))) : (min((((/* implicit */long long int) var_10)), (arr_14 [i_0 + 2] [i_1] [i_2] [i_3 + 2] [i_5] [i_5]))))));
                            }
                            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_0 [(signed char)11]))));
                                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (2143910095175046570LL)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])) >> (((/* implicit */int) var_2)))))) != (((/* implicit */int) arr_11 [i_3] [i_0] [i_3] [i_3]))));
                            }
                            var_27 = (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53210)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) : (arr_12 [i_3 + 2] [i_3 + 2] [16LL] [i_3 - 1]))));
                            arr_20 [0LL] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)-20))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [(short)5])) : ((-2147483647 - 1)))))) << (((arr_13 [i_0] [i_1] [i_1] [i_0] [4] [i_3]) - (1190035952044389257LL)))))) : (((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)-20))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [(short)5])) : ((-2147483647 - 1)))))) << (((((arr_13 [i_0] [i_1] [i_1] [i_0] [4] [i_3]) - (1190035952044389257LL))) - (946995221462448527LL))))));
                            var_28 = ((/* implicit */signed char) var_6);
                            var_29 = ((/* implicit */long long int) ((((long long int) (-(var_4)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) -4310836145877294041LL)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-121))))))) ? (min((((/* implicit */long long int) (unsigned char)245)), (7943798898784285460LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_31 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0]), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0]))))) >= (((((/* implicit */_Bool) arr_19 [i_0 + 2])) ? (arr_19 [i_0 + 2]) : (arr_19 [i_7])))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) min((var_32), (var_8)));
                var_33 = ((/* implicit */signed char) ((unsigned int) -6046932333361874777LL));
            }
        } 
    } 
}

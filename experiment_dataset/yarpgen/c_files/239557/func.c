/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239557
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((0), (((/* implicit */int) (unsigned short)57658))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_1] [i_1 + 2]))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])))) % (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) ((unsigned char) -1789375713))) : (((0) * (((/* implicit */int) (_Bool)1)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7878)) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14896946572750718076ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2)))) && (((/* implicit */_Bool) ((unsigned int) (_Bool)1))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-12))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (371112405U))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((min(((+(((/* implicit */int) arr_11 [i_6] [i_1 + 2] [(unsigned char)3])))), (max((((/* implicit */int) (unsigned char)75)), (var_12))))), (((-3) * (((((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_1])) % (((/* implicit */int) (unsigned short)47679))))))));
                                var_18 = ((/* implicit */unsigned char) var_10);
                                var_19 = ((/* implicit */unsigned short) var_6);
                                var_20 = (~(max((arr_4 [i_5] [i_5] [i_4 - 1] [i_6]), ((+(arr_2 [i_0] [0LL]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (min((((/* implicit */unsigned long long int) var_1)), (var_7)))))) ? (((max((-5), (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (unsigned short)7877)) % (var_12))))) : ((~(((/* implicit */int) var_6))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(var_7))))));
    var_23 = ((/* implicit */short) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_7))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) var_4)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25453
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0 - 2] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_3] [(unsigned char)0] [i_1] [i_0 + 1] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_2] [i_3] [(signed char)2])))))));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned short) arr_8 [i_0] [i_0] [(signed char)4] [i_0 - 1] [i_0 - 1])))));
                            arr_11 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned short)65534)) + (((/* implicit */int) (signed char)-8)))) >= (((/* implicit */int) min(((unsigned char)8), (((/* implicit */unsigned char) (signed char)-110))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) ((_Bool) arr_6 [i_2]))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_2 [i_0 + 1] [i_2]) : (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_3])))))));
                        }
                    } 
                } 
                var_14 -= ((/* implicit */unsigned int) (unsigned char)225);
                var_15 -= var_7;
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (int i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)223)) ? ((-(((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) ((arr_1 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))))))))));
                            arr_18 [9] [i_1] [i_4 - 1] [i_5] = ((/* implicit */signed char) arr_16 [i_0] [i_5 + 1] [i_4] [i_0] [i_0] [i_5]);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_13 [i_1])) | (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) >= (((/* implicit */int) arr_9 [i_0] [i_1] [i_4]))))))))))));
                            var_18 = ((/* implicit */long long int) (+(max((arr_0 [i_1]), (((/* implicit */unsigned int) arr_17 [i_4 + 2] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_5);
    var_20 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)96))))) : (var_6))), (((/* implicit */long long int) (unsigned char)5)));
    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_10)))))) % (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) | (var_0)))));
}

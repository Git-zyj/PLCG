/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235092
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((arr_0 [i_0] [(unsigned short)11]), (((/* implicit */unsigned short) (signed char)-59))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (unsigned short)27757);
                                var_19 = ((/* implicit */unsigned short) min((((17179868672ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_3 - 1] [i_3 + 2] [i_3 + 2]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)24)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max(((~(var_5))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(signed char)16] [i_2])))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned short)11] [(_Bool)1])) < (((/* implicit */int) (unsigned short)19007))));
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_5] [15LL]))));
                                var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_17 [i_0]))))), (((((/* implicit */_Bool) -944745555)) ? (((((/* implicit */_Bool) (unsigned short)27750)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) : (4678554286469095925ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) 6759895909292988013LL)))));
    }
    var_25 = ((/* implicit */unsigned short) var_6);
    var_26 = ((/* implicit */long long int) var_16);
}

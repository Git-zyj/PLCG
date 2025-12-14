/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249385
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
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((((/* implicit */int) (_Bool)1)) | (arr_3 [10ULL]));
                                arr_15 [i_4] [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9)))) ? (arr_3 [(_Bool)1]) : (((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_3])) ? (((/* implicit */int) (unsigned short)43912)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)21624)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_2 [(signed char)23] [i_3])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18833))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-4627)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-43)))))))));
                            }
                        } 
                    } 
                } 
                var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(max((arr_9 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_5 [i_0 - 2])))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    for (int i_6 = 4; i_6 < 24; i_6 += 2) 
                    {
                        {
                            arr_21 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29292)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (549755748352ULL)));
                            arr_22 [i_6] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (short)4626);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            {
                var_21 = (+(((/* implicit */int) var_16)));
                var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((unsigned long long int) arr_3 [i_7])) : (((/* implicit */unsigned long long int) 3699035586U))));
            }
        } 
    } 
}

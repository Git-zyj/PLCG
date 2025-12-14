/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25171
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294965248LL)) ? (((/* implicit */unsigned long long int) -4294965251LL)) : ((((!(((/* implicit */_Bool) (unsigned short)6250)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4572)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((unsigned long long int) 7202265375232622289LL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) 9782159899200208360ULL);
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(3991589116309976104LL)))) ? ((~(8796093021184ULL))) : (11283162978939196271ULL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_20 [i_1] [i_4] [i_4] [i_1] [i_4] [i_0] = ((/* implicit */int) ((unsigned int) var_10));
                            arr_21 [i_4] = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) 125829120)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4569))))) : ((~(((((/* implicit */_Bool) (short)4572)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) : (1326214000U)))))));
                            arr_22 [i_4] [18LL] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-118)), ((-(4294965262LL)))));
                            arr_23 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (229562400U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))))))))), (min((((long long int) (short)-4569)), (((/* implicit */long long int) (short)11470))))));
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((10010147110650369133ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1006853320)))))))));
                        }
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
}

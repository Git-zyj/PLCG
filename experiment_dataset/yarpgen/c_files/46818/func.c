/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46818
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((var_4) % (((/* implicit */unsigned long long int) 1594047796))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_2] = arr_0 [i_0];
                            arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) max((var_8), (var_5)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_8)))))) + ((-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)22664))))))));
    var_12 = ((/* implicit */signed char) (unsigned short)7122);
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + ((-(((/* implicit */int) (unsigned char)150))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((((_Bool)1) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))))))))));
}

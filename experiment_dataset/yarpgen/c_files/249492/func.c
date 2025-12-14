/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249492
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
    var_20 = ((/* implicit */short) (+((~((~(1242151721)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [(short)17] [i_2] [i_2] [i_2] = (~((-((+(-1242151725))))));
                                var_21 = ((/* implicit */unsigned char) (~((+((-(arr_2 [i_0])))))));
                                var_22 += ((/* implicit */signed char) (~((+((+(((/* implicit */int) (short)-11560))))))));
                                arr_12 [i_2] [i_3] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_1 [6] [6]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */signed char) (-((-((~(arr_10 [i_0] [i_0])))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-((-((-(-617038645))))))))));
                            arr_20 [i_5] = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) (-(17896517663449811238ULL)));
            }
        } 
    } 
}

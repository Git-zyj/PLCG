/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24203
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
    var_20 = ((/* implicit */unsigned char) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((unsigned char) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 + 4] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (unsigned short)40761)))));
                arr_6 [(short)10] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (arr_2 [i_0 + 4] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) var_2))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (var_18)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) arr_8 [i_3] [i_1] [i_0])) : (3840637032849436894LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1374631412048336036LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-16))))) : (((((/* implicit */_Bool) 2061963574U)) ? (4206781607175763109LL) : (((/* implicit */long long int) -1613789150)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_4)))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [13ULL] [8] = ((/* implicit */short) min((((unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_2])), ((-(7862528163646199288ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] = arr_13 [i_4] [i_0] [i_4] [i_5];
                            arr_19 [15U] [i_0] [15U] [i_0] [i_0] = ((/* implicit */unsigned int) arr_17 [i_0]);
                            arr_20 [i_0] = ((short) min((var_14), (((/* implicit */unsigned int) var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
}

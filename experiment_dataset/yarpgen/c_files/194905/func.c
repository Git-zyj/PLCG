/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194905
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)12468))));
                    var_17 -= ((/* implicit */long long int) (unsigned char)97);
                    arr_11 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_12 [i_1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4705370100314818892LL))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32226))) / (6726188488552005391LL)))) || (((/* implicit */_Bool) arr_2 [13ULL] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                arr_18 [i_4] = var_9;
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [6ULL] [6ULL] [(_Bool)1] [i_3]))))))) * ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32226))) - (10098613007400279041ULL))))))))));
                    arr_23 [i_5] [i_4] [i_4] [i_3] = ((int) ((unsigned char) var_16));
                    arr_24 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)12488)))) - (((((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_14 [i_3] [i_5]))))));
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    arr_27 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)53052)))))) ? ((+((-(((/* implicit */int) (short)32220)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((3162299935U) * (((/* implicit */unsigned int) -374875106))))))))));
                    var_19 -= ((/* implicit */short) (unsigned short)12494);
                    arr_28 [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (short)27889))));
                }
            }
        } 
    } 
}

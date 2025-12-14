/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242085
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
    var_13 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))));
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */_Bool) -502552699);
    var_16 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+(var_4)));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3)) >> (((956554976) - (956554970)))))), (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (unsigned char)3))))));
        }
        for (int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            arr_8 [i_2] [1U] [i_0] |= ((/* implicit */int) (_Bool)1);
            arr_9 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(11727208277646784076ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            var_20 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_8))))) - (((/* implicit */int) var_1))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(-956554972))) - (-956554975)))) ? (((((/* implicit */_Bool) (~(1265332185)))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) var_12)) / (((((/* implicit */_Bool) 8985121868199866446LL)) ? (var_9) : (((/* implicit */int) var_5))))))));
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_24 [i_5] = ((((/* implicit */int) var_12)) - (((((/* implicit */_Bool) 7201926594085813782ULL)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_8)))));
                            var_21 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) 16)) ? (1862494325U) : (((/* implicit */unsigned int) 536870911))))))));
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_25 [i_0] [i_5] [i_4] [i_5] [i_0] = ((((/* implicit */_Bool) (unsigned char)12)) && ((_Bool)1));
                        }
                    } 
                } 
            } 
            arr_26 [i_3] = (~(-16));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_29 [i_0] [i_0] [i_7] [6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967291U)) ? (var_4) : (((/* implicit */long long int) 956554991))));
                var_23 = ((/* implicit */_Bool) (~((-2147483647 - 1))));
                arr_30 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))));
            }
            var_24 = ((/* implicit */unsigned short) max((var_24), ((unsigned short)8329)));
        }
        arr_31 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-71))));
    }
}

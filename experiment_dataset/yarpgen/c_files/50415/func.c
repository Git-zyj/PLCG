/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50415
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
    var_19 = ((/* implicit */unsigned int) var_3);
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_21 = ((/* implicit */unsigned int) (unsigned char)63);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_22 ^= ((/* implicit */short) min((min((max((((/* implicit */unsigned int) var_17)), (var_14))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        var_23 = var_9;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) != (((long long int) var_17)))));
                    var_25 *= ((/* implicit */long long int) var_12);
                    arr_7 [i_2] = ((/* implicit */unsigned char) var_15);
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (var_16)))) >> (((((/* implicit */int) var_1)) - (29652)))))) ? (((var_6) ? ((-(((/* implicit */int) (unsigned char)119)))) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_18)) == (((/* implicit */int) (unsigned short)11237))))) : (((/* implicit */int) max((var_4), (var_18))))))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_27 += ((min((((/* implicit */unsigned long long int) var_7)), (var_13))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))));
        arr_11 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)14321)) || (((/* implicit */_Bool) (unsigned char)204)))) ? (((((/* implicit */int) var_3)) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))) ^ (-1557736186773544688LL))) + (1557736186773544677LL))))) : (((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 7; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_20 [i_3] [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_5 - 3] [i_5 - 3]))))) / (((/* implicit */int) var_17))));
                        arr_21 [i_6] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */long long int) arr_2 [i_3] [i_4]);
                        var_28 = ((/* implicit */_Bool) var_16);
                        arr_22 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */long long int) max((((((/* implicit */int) ((_Bool) 3312440088850970487ULL))) % (-1438175846))), (((/* implicit */int) var_10))));
                    }
                } 
            } 
        } 
    }
}

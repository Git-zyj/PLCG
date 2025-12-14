/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39267
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
    var_20 = var_2;
    var_21 ^= max((min((((int) var_12)), (((((/* implicit */_Bool) -638430469)) ? (-638430489) : (var_14))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_7) : ((-(var_13))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9)) ? (-365879982) : (((/* implicit */int) (!(((/* implicit */_Bool) -1178203697)))))))) ? (min((var_5), ((+(arr_1 [i_0]))))) : (arr_2 [i_0]));
        arr_3 [i_0] = (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((-638430475) != (-772443905))) ? ((~(arr_1 [i_0]))) : ((-(arr_2 [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? ((-(arr_1 [i_0]))) : (((-1) | (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_23 ^= arr_4 [i_0] [i_1] [i_0];
                        arr_12 [i_0] [i_3] [i_2 - 2] [i_3] [i_3] = (+(max((arr_5 [i_1 - 3] [i_2 + 2]), (((/* implicit */int) ((-1760030809) != (2048668019)))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_1] = ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), ((~(arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) (+(-348826832)))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 4] [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_8 [i_1]) : (var_3)))) ? ((+(arr_5 [i_0] [i_0]))) : (((((/* implicit */_Bool) -365879982)) ? (arr_5 [i_0] [i_1]) : (arr_6 [i_0] [i_1] [i_1] [i_1 + 1]))))));
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1] [i_1]))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_4] [i_4] [i_5 + 1] [i_6] = (+(((((/* implicit */_Bool) ((int) 365879982))) ? (((((/* implicit */_Bool) -772443905)) ? (arr_7 [i_0] [i_0] [i_4] [i_0]) : (arr_6 [i_4] [i_4] [i_4] [i_5]))) : (((((/* implicit */_Bool) 2128565967)) ? (218103606) : (-365879999))))));
                            var_25 = ((arr_5 [i_5] [i_6]) | (arr_4 [i_0] [i_4] [i_0]));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
    {
        var_26 = ((((/* implicit */_Bool) (-(var_8)))) ? (min((((/* implicit */int) ((arr_23 [i_7]) < (-715076216)))), (-9))) : (((((/* implicit */_Bool) arr_24 [i_7 + 1])) ? (arr_24 [i_7 - 2]) : (arr_23 [i_7]))));
        var_27 &= -766612961;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 23; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        arr_33 [i_7] [i_7] [i_7] [i_10] = (+((+(max((arr_25 [i_7] [i_7 + 1]), (var_16))))));
                        arr_34 [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) var_15)) ? (max((((((/* implicit */_Bool) 274243882)) ? (arr_32 [i_7] [i_8] [i_9] [i_7]) : (var_9))), (arr_28 [i_7] [i_9 - 3] [i_7]))) : (max(((~(arr_32 [i_7] [i_7] [i_7] [i_10]))), (min((arr_31 [i_10] [i_9] [i_9] [i_8] [i_8] [i_7 + 1]), (arr_28 [i_7] [i_9] [i_7]))))));
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) 20)) || (((/* implicit */_Bool) (((+(var_0))) | (arr_27 [i_8] [i_8] [i_8])))))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 2; i_12 < 23; i_12 += 2) 
                        {
                            var_29 = var_15;
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-274243882)))) ? ((-(365879982))) : (((((/* implicit */_Bool) 1159608492)) ? (33030144) : (1335086263)))))) || (((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_11] [i_7])))))));
                            var_31 = ((/* implicit */int) min((var_31), (max((min(((~(-1258051199))), (arr_36 [i_7 - 1] [i_9] [i_11] [i_12]))), (max((min((arr_36 [i_7] [i_9] [i_12] [i_12]), (148544479))), (2048668011)))))));
                        }
                        arr_41 [i_7] [i_7] [i_8] [i_7] [i_9 - 3] [i_7] = (+(min((((((/* implicit */_Bool) -2048668012)) ? (-416025148) : (arr_26 [i_11]))), (arr_29 [i_7] [i_7 - 1] [i_7] [i_7]))));
                    }
                    var_32 = ((((/* implicit */_Bool) ((((arr_35 [i_7] [i_7] [i_7]) == (536866816))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -289448311))))) : (((((/* implicit */_Bool) var_9)) ? (arr_26 [i_7]) : (-1335086258)))))) ? (min((min((arr_26 [i_8]), (var_3))), ((-(var_12))))) : (arr_30 [i_7] [i_8] [i_7]));
                    var_33 ^= -1258051218;
                    var_34 = ((int) ((((((/* implicit */_Bool) arr_39 [i_7] [i_7])) ? (var_15) : (var_16))) & (((/* implicit */int) ((arr_27 [i_7] [i_8] [i_9]) < (arr_26 [i_8]))))));
                    var_35 = -289448311;
                }
            } 
        } 
    }
    for (int i_13 = 2; i_13 < 22; i_13 += 1) /* same iter space */
    {
        arr_45 [i_13 + 1] [i_13] = ((((((/* implicit */int) (!(((/* implicit */_Bool) 33030144))))) >= ((-(arr_28 [i_13] [i_13] [10]))))) ? (((int) ((int) var_2))) : ((((+(452845194))) | (max((1824316835), (var_15))))));
        var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 771168330)))))))));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15; i_14 += 4) 
    {
        arr_48 [i_14] [i_14] = ((((/* implicit */_Bool) arr_32 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 + 1])) ? ((+(arr_24 [i_14]))) : (((((/* implicit */_Bool) 7)) ? (var_0) : (-798137364))));
        var_37 = ((/* implicit */int) max((var_37), (arr_47 [i_14])));
        arr_49 [i_14] = var_7;
    }
}

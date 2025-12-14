/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54726
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (+(-6372825721880621789LL)))));
                            var_17 = ((/* implicit */unsigned short) (+(((-372403839) - (-1948837410)))));
                            arr_13 [i_1] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [6] [i_1 + 1] [2]);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 473254223))))), (((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (673660561) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))));
        }
        arr_14 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_25 [(unsigned short)3] [i_7] [i_6] [(unsigned short)3] [5] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)252)) - (-1381276211)));
                                var_19 = ((/* implicit */unsigned int) -1381276211);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)140)), (arr_21 [(unsigned short)2] [(unsigned char)13] [i_6] [i_6] [i_5 - 1])))) + (((((/* implicit */int) (unsigned short)5241)) - (((/* implicit */int) (unsigned short)43034))))));
                    var_21 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) 372403839)), (5435748652932513344LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [1U] [i_5] [i_5 + 1])))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-26)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5435748652932513350LL))))) : (((((/* implicit */int) arr_11 [1] [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0])) / (((/* implicit */int) (unsigned char)197))))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_23 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_8 [i_9])))));
            var_24 &= ((/* implicit */unsigned short) var_9);
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_25 &= ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-47)), (arr_0 [i_0]))))));
            var_26 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */int) arr_21 [i_0] [(signed char)3] [i_0] [i_0] [i_0])), (arr_29 [i_0] [i_10]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 4; i_11 < 20; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            {
                var_27 = ((/* implicit */int) max((var_27), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-26))))))))))));
                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)33534)) ? (arr_36 [i_11 + 2]) : (arr_36 [i_11 - 1]))) / ((~(((/* implicit */int) (unsigned char)116))))));
                var_29 = ((/* implicit */unsigned int) 1381276194);
            }
        } 
    } 
    var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */int) (_Bool)1)) << (0)))));
}

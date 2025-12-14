/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223331
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
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (min((-19695873), (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2394725969U)) ? (19695873) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_5)))) : (max((((/* implicit */int) (_Bool)0)), (-19695873)))))) : (((((/* implicit */_Bool) -19695882)) ? (14932199073657527072ULL) : (((/* implicit */unsigned long long int) ((unsigned int) 14932199073657527072ULL)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) 17544244494187988612ULL);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_15 = ((unsigned char) (((_Bool)1) ? (0) : ((~(((/* implicit */int) var_5))))));
        var_16 = ((/* implicit */long long int) (+((-((-(((/* implicit */int) var_10))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), ((unsigned char)95)));
                    arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((int) (_Bool)1));
                    arr_13 [i_2] [3ULL] [i_4] [i_4] = (!(((/* implicit */_Bool) (unsigned char)100)));
                    var_18 -= (-(max((((/* implicit */unsigned long long int) (_Bool)0)), (var_7))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-11854)))), (((/* implicit */int) ((short) (short)-29326)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_4)))))) : (((/* implicit */int) (short)-4910))));
                                var_20 = ((short) ((((/* implicit */_Bool) 8)) ? (max((var_0), (((/* implicit */long long int) (signed char)-114)))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-19695890))))));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_5] [(short)9] = ((/* implicit */signed char) max((min((16986718060648905738ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (unsigned short)65531))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_5))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_12);
}

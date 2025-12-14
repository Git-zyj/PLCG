/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195284
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) ((unsigned short) var_10));
            var_17 = ((/* implicit */unsigned int) ((unsigned long long int) 10370917951988763863ULL));
            var_18 = ((/* implicit */unsigned int) ((unsigned char) var_5));
            var_19 = ((/* implicit */int) ((3395628170U) << (((((unsigned long long int) -5898200534489464974LL)) - (12548543539220086627ULL)))));
            var_20 = ((/* implicit */signed char) ((unsigned char) 673750530));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) var_13);
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) (short)15161));
                        var_23 = ((/* implicit */unsigned long long int) ((int) 12872510051092132412ULL));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) & (18446744073709551615ULL))))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)15168))) ^ (var_9)));
                            var_25 = ((unsigned int) 12872510051092132412ULL);
                        }
                        for (unsigned char i_6 = 4; i_6 < 7; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((unsigned long long int) 1959634720U));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((long long int) 935695520U)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_2))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((signed char) (short)15161)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_22 [i_2] [i_2 + 1] [i_3] [i_4] [i_4] [i_8] = ((/* implicit */short) ((16777215) / (518518516)));
                            var_30 = ((/* implicit */unsigned short) ((long long int) var_6));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_31 = max((((unsigned int) 12872510051092132408ULL)), (max((var_0), (((/* implicit */unsigned int) var_14)))));
        var_32 = ((/* implicit */unsigned short) ((signed char) ((int) (short)(-32767 - 1))));
    }
    var_33 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (unsigned int i_12 = 4; i_12 < 9; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 9; i_13 += 3) 
                    {
                        for (long long int i_14 = 1; i_14 < 8; i_14 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_14))));
                                arr_39 [i_10] [i_10] [i_11] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) ((unsigned char) var_8)))) % (var_7)));
                            }
                        } 
                    } 
                    arr_40 [i_11] = ((/* implicit */unsigned char) ((int) ((int) -731880067980126785LL)));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((unsigned char) ((short) var_6)))));
                    var_36 = ((/* implicit */signed char) max((-6566569155616302410LL), (((/* implicit */long long int) ((int) var_12)))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */signed char) var_6);
}

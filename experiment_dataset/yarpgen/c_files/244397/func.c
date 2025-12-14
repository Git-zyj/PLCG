/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244397
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (((~(((/* implicit */int) var_8)))) <= (-1170801300)))) : (((/* implicit */int) ((unsigned char) (+(1918427681)))))));
                        var_17 = ((/* implicit */unsigned char) ((max((arr_8 [i_0 - 1] [i_2 - 1] [i_0] [i_0]), (arr_0 [i_0]))) >> (((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (-1918427688)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (-848531106))) : (((((/* implicit */_Bool) 1918427681)) ? (1918427681) : (1541805259))))) - (1918427651)))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_5 [10] [i_0 - 1] [10])) : (((/* implicit */int) arr_5 [4] [i_0 + 1] [4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((int) arr_5 [(unsigned char)10] [i_0 + 1] [(unsigned char)10])))))));
    }
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        var_19 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))) : ((~(var_9)))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            for (unsigned char i_6 = 4; i_6 < 12; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (+((((+(var_0))) / (((((/* implicit */_Bool) -1918427697)) ? (1081108858) : (1918427681)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) var_15);
                                var_22 = ((/* implicit */int) ((unsigned char) -1918427681));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((var_23), (((int) arr_16 [i_6]))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_6 - 3] [i_5])) ? (((/* implicit */int) arr_3 [i_6 - 3] [(unsigned char)0])) : (((/* implicit */int) arr_3 [i_6 - 3] [i_4])))), (((((/* implicit */_Bool) arr_3 [i_6 - 3] [i_5])) ? (((/* implicit */int) arr_3 [i_6 - 3] [i_4])) : (((/* implicit */int) arr_3 [i_6 - 3] [i_5])))))))));
                }
            } 
        } 
        arr_23 [0] |= arr_17 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4];
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(arr_8 [i_4] [i_4] [i_4] [i_4]))))));
    }
    var_26 = ((/* implicit */unsigned char) var_2);
    var_27 = ((/* implicit */int) ((unsigned char) var_14));
    var_28 = var_6;
}

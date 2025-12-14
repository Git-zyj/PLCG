/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20466
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
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)0)), (((((var_3) & (((/* implicit */unsigned long long int) 15U)))) + (((/* implicit */unsigned long long int) (-(-6941710921279934443LL))))))));
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (var_2)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)247))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)2])) ? (arr_1 [2LL]) : (arr_0 [(signed char)0])))) : (min((((/* implicit */unsigned int) (unsigned char)123)), (1948533374U))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_14 = (~(((/* implicit */int) ((signed char) arr_8 [i_3 + 1] [i_0] [i_0] [i_3 + 1]))));
                        var_15 &= ((/* implicit */short) ((((((_Bool) (unsigned char)7)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_3 + 1])) ? (var_3) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_3 + 1] [i_1] [i_0]), (arr_2 [i_1]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)16] [i_3 + 3] [0])) >= (-2106103357)))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0])) ? (1431873579) : (((/* implicit */int) (_Bool)0)))))) ? ((~(((((/* implicit */int) (unsigned char)153)) | (((/* implicit */int) (short)2623)))))) : (-410937632)));
        arr_9 [i_0] = ((/* implicit */int) (~(((unsigned int) 0ULL))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_11 [(unsigned char)8] [(signed char)10]))));
        var_19 -= ((/* implicit */unsigned short) ((long long int) arr_10 [i_4]));
        arr_12 [i_4] = ((/* implicit */unsigned char) (_Bool)1);
        var_20 *= ((/* implicit */signed char) arr_10 [10ULL]);
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_21 += ((/* implicit */unsigned char) (+(min((arr_13 [i_5] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) <= (-922059134))))))));
        var_22 = ((/* implicit */short) arr_14 [i_5] [i_5]);
        /* LoopSeq 3 */
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            arr_17 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5])))))) - (((5449078323530203679ULL) % (((/* implicit */unsigned long long int) min((arr_14 [i_5] [i_5]), (((/* implicit */int) (_Bool)1)))))))));
            arr_18 [(signed char)8] [(signed char)8] = var_9;
            var_23 *= ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            var_24 = ((/* implicit */signed char) arr_13 [i_5] [i_7 + 2]);
            var_25 += ((/* implicit */unsigned long long int) 8);
        }
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_26 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [2U] [i_8] [i_5])) + (arr_13 [i_8] [i_5])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19271)) | (((/* implicit */int) (short)10997))))), (((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (arr_13 [i_5] [i_5]) : (arr_16 [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))));
            var_27 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_6)))) ^ (arr_21 [i_8]))))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)84))))), (((unsigned long long int) arr_14 [i_5] [i_8])))))))));
        }
    }
}

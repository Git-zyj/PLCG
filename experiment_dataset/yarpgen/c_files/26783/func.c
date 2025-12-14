/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26783
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_11 &= ((/* implicit */unsigned short) (signed char)-66);
                            arr_13 [i_0] = ((/* implicit */short) arr_9 [i_0] [5LL] [i_2] [i_2]);
                            arr_14 [i_0] [i_4] [i_0] [i_0] [i_0] &= ((/* implicit */int) arr_7 [i_2 - 3] [i_0]);
                            arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-66))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [(unsigned char)5] [i_2 + 1] [i_1 + 3] [i_1 + 2] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) ((signed char) var_1)))));
                        }
                        arr_17 [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) <= (var_2)))))), (((/* implicit */int) ((short) arr_6 [i_3 - 3] [i_3 - 2] [i_0] [i_0])))));
                        arr_18 [i_0] [3U] [i_0] = ((/* implicit */unsigned long long int) (((-(((arr_1 [(unsigned char)8] [(unsigned char)8]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1 + 2] [i_0])))))) > (min((((/* implicit */int) min(((unsigned short)19), (((/* implicit */unsigned short) arr_2 [i_0]))))), (((-1594201567) & (((/* implicit */int) var_6))))))));
                        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 753138642U)) ? (((/* implicit */int) (short)-11590)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) ((((/* implicit */int) (!(var_10)))) < (((/* implicit */int) ((short) (-2147483647 - 1)))))))));
                        var_13 -= ((/* implicit */signed char) -1201348120);
                    }
                    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)64))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_15 -= ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_0] [i_1 + 3] [i_5])));
                        arr_21 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_2 - 4] [i_2])) ? (arr_6 [i_1 + 3] [i_1 + 3] [i_2 + 2] [i_5]) : (arr_6 [i_1 + 1] [6U] [i_2 - 2] [i_5])));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_20 [i_0] [i_0] [i_0] [i_5])))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))));
                    }
                    var_17 = ((/* implicit */int) ((((((((/* implicit */_Bool) -1591406830)) ? (arr_8 [i_0] [i_1 + 2] [i_1] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned char)192)))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (~(-1605975040)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1591406829)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) 1821450446);
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    arr_28 [i_6] [i_6] = ((/* implicit */signed char) arr_24 [(unsigned char)3] [i_8]);
                    arr_29 [i_6] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_6] [i_6] [i_7] [i_8] [i_8])))) & (arr_6 [i_6] [i_7] [i_8] [i_8])));
                    var_19 = ((/* implicit */long long int) 15288316855743288098ULL);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_5);
    var_21 *= ((/* implicit */short) var_1);
}

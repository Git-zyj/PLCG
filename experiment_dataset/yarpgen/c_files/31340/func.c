/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) 7624297339323737877ULL))) : (((/* implicit */int) ((short) arr_2 [i_0]))));
        arr_4 [i_0] = arr_0 [(short)9] [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            var_11 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1 + 3] [i_1 - 1]))));
            var_12 = ((/* implicit */short) (~(var_4)));
        }
        var_13 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (arr_2 [i_0])));
        var_14 = ((/* implicit */unsigned int) (short)32767);
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_2])) + (((/* implicit */int) arr_5 [i_2] [i_2]))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_2] [i_2])))));
        arr_12 [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [i_2])) > (((/* implicit */int) arr_0 [i_2] [i_2]))))), ((~(((/* implicit */int) arr_0 [i_2] [i_2]))))));
        var_16 = ((/* implicit */signed char) arr_6 [i_2]);
    }
    var_17 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_4)))));
    var_18 += ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) var_3);
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_16 [i_3] [i_4] [i_4])) & (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)255)))))));
            var_21 &= ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)480)))) << (((((/* implicit */int) arr_7 [i_3] [i_4])) - (239)))));
        }
        for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            var_22 = arr_14 [i_3];
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                arr_21 [(_Bool)0] [17] [(_Bool)0] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10))))), (((arr_13 [i_3] [i_3]) ? (((/* implicit */int) arr_16 [i_3] [(short)17] [i_6])) : (((/* implicit */int) var_7)))))));
                arr_22 [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_17 [i_3] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-481))))) : (((/* implicit */int) ((arr_17 [i_5] [i_6]) < (arr_17 [i_3] [i_3]))))));
            }
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-480)) ? (((/* implicit */int) (short)-481)) : (((/* implicit */int) (unsigned char)196))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))) : (((((/* implicit */_Bool) var_0)) ? (var_10) : (var_6))))))));
            var_24 = ((/* implicit */short) ((((/* implicit */int) var_9)) * (((/* implicit */int) (!(((/* implicit */_Bool) 3500017767U)))))));
        }
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) (short)-1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((+(arr_28 [i_3])))));
            arr_30 [i_3] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)498)) : (((/* implicit */int) (short)-480))))));
            var_26 = ((((/* implicit */_Bool) arr_16 [i_3] [i_8] [(_Bool)1])) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_8])) : (((/* implicit */int) arr_16 [i_3] [i_8] [i_8])));
            arr_31 [i_3] [(unsigned short)15] = ((((((/* implicit */int) (short)-486)) + (2147483647))) << (((702724589) - (702724589))));
            arr_32 [i_8] = ((/* implicit */long long int) var_0);
        }
    }
}

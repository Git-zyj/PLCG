/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193916
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) (+(min((var_8), (((/* implicit */long long int) var_13)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */short) var_9)), ((short)32767))))) ? (max((((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_0 + 1]))) : (arr_10 [i_1] [i_1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) & (((/* implicit */int) (signed char)-66))))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1] [i_3])) ? (((/* implicit */unsigned long long int) 2131740868)) : (arr_10 [i_0 + 1] [i_0 - 1] [i_1]))))))));
                        arr_11 [i_3] [i_2] [i_2] [i_2] [(unsigned char)9] = ((((-2147483647) / (((/* implicit */int) (unsigned char)23)))) | ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) (unsigned short)52075)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_0])) : (((/* implicit */int) arr_3 [i_3] [4LL] [i_1])))) : (((/* implicit */int) arr_9 [(unsigned char)18] [i_2] [i_2] [17LL])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_17 [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) (signed char)5);
                    arr_18 [(signed char)7] [i_4] [i_5] = ((/* implicit */unsigned char) (short)32765);
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) max((18446181123756130304ULL), (((/* implicit */unsigned long long int) -270952286))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            arr_25 [i_6] = ((/* implicit */unsigned char) ((signed char) arr_1 [i_6 - 1]));
            arr_26 [i_6 - 3] [i_6] = ((/* implicit */short) (~(arr_23 [i_6 - 1])));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 3955107212U))) ? (arr_20 [i_6 - 1]) : (7611443214416675275ULL)));
        }
        var_17 = ((((/* implicit */_Bool) arr_21 [i_6 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 + 2]))) : (arr_21 [i_6 + 3]));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
    var_19 = ((/* implicit */unsigned int) var_5);
}

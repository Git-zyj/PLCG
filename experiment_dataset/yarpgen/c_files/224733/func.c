/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224733
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = max(((_Bool)0), ((_Bool)1));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_0] [i_0]));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (33423360U)))) ? (max((arr_1 [i_1 - 2]), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(arr_8 [i_1 + 1] [i_3 - 1])));
                        arr_11 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (signed char)9);
                        arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                        var_14 = (~(max((((((/* implicit */unsigned long long int) -629946430)) | (16075440518266471227ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)17))))))));
                    }
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((unsigned int) arr_13 [i_1 - 4] [i_4] [i_4] [i_4] [i_4 + 1] [i_4])) >> (((((/* implicit */int) ((short) var_10))) - (29924))))))));
                        var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65519)) << (((var_7) - (12887391583428318446ULL)))))) || (((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0] [(unsigned short)2] [i_2] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)65514))))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)16)) && (((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 3] [i_4 - 1])))) ? (max((var_10), (((/* implicit */int) arr_9 [i_1 - 3] [i_1 - 2] [i_4 + 1])))) : ((~(((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_4 + 1])))))))));
                        var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)19901))) || (((/* implicit */_Bool) min((arr_1 [i_1 + 1]), (((/* implicit */unsigned int) (signed char)-1)))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_21 [i_0] [i_5] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((long long int) arr_14 [i_0] [i_0] [i_5] [i_0] [i_0])))) <= (((/* implicit */int) arr_0 [i_0]))));
                    arr_22 [i_0] [i_6] |= 2371303555443080388ULL;
                }
            } 
        } 
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515)))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1254347281)) || (((/* implicit */_Bool) var_10)))))));
    }
    var_20 += ((/* implicit */long long int) 568694297);
    var_21 = ((/* implicit */long long int) var_11);
}

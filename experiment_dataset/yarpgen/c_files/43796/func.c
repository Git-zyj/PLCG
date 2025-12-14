/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43796
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_14 += ((/* implicit */signed char) ((short) arr_2 [(signed char)8]));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_0 [i_0]))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))) ? (((9223372036854775807LL) << (((((/* implicit */int) ((var_6) || ((_Bool)1)))) - (1))))) : (((((/* implicit */_Bool) ((long long int) (signed char)-78))) ? ((+(arr_1 [i_1 - 3]))) : ((+(arr_1 [i_2])))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)127))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_4 [i_0] [i_0])))))) : (((/* implicit */int) ((short) 0U)))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((((+(var_3))) > (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)178)), (var_12))))))) : ((-(((unsigned long long int) -1523588419))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((max((-1523588419), (-1523588419))), (((/* implicit */int) ((unsigned short) arr_6 [(signed char)2] [i_0 + 1] [i_0 - 2]))))))));
    }
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 288089638663356416LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))))), (var_12)));
    /* LoopNest 3 */
    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */long long int) (-(((arr_12 [i_3 - 3]) | (arr_12 [i_3 - 1])))));
                    var_18 += ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (arr_12 [i_3])));
                    arr_18 [i_3] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_12 [i_3 - 3])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) || (((/* implicit */_Bool) var_8)))))))));
                }
            } 
        } 
    } 
}

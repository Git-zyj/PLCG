/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229215
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
    var_17 = ((((/* implicit */_Bool) max((var_15), (min((-6491170544191380964LL), (((/* implicit */long long int) var_13))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [(unsigned char)8] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -9171921180083485782LL)))) ? (((((/* implicit */int) ((unsigned char) arr_1 [6LL]))) * (((((/* implicit */int) (unsigned char)4)) << (((((/* implicit */int) (unsigned char)255)) - (244))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) arr_2 [i_0]))))) >= (((/* implicit */int) max((arr_0 [(_Bool)1]), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((long long int) arr_2 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
        var_18 *= ((/* implicit */_Bool) (~(var_11)));
        var_19 = ((_Bool) arr_7 [i_1] [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_10 [i_1] [i_1] [i_3]);
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1]);
                    var_21 = ((/* implicit */unsigned char) ((var_15) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_3]))))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((unsigned char) (+(arr_10 [i_1] [i_1] [i_1])));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) (-(arr_6 [i_1])));
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_23 = ((/* implicit */_Bool) (((+(max((((/* implicit */long long int) arr_12 [i_4])), (562949953421310LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4]))))))));
        var_24 = ((((_Bool) arr_17 [i_4] [i_4])) ? (((arr_10 [i_4] [i_4] [i_4]) - (arr_10 [i_4] [i_4] [i_4]))) : (min((((((/* implicit */_Bool) (unsigned char)171)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (-6619482057324457256LL))));
        var_25 = (((!(((/* implicit */_Bool) ((long long int) var_3))))) ? (((((/* implicit */_Bool) -6619482057324457256LL)) ? (2287828610704211968LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))) : (((((/* implicit */_Bool) ((long long int) var_7))) ? (min((((/* implicit */long long int) var_5)), (arr_13 [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((_Bool)1))))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) 6619482057324457261LL)) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) << (((arr_13 [i_4] [i_4] [i_4]) - (5490673822178115449LL))))))))) ? ((-(max((((/* implicit */long long int) arr_5 [i_4])), (arr_13 [i_4] [i_4] [i_4]))))) : (889875308862719862LL)));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) max((arr_7 [i_4] [i_4]), (((/* implicit */long long int) arr_9 [i_4] [i_4] [i_4]))))) ? (((var_11) ^ (arr_11 [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
    }
    var_28 = (~(6402262271594152602LL));
    var_29 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                var_30 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_5] [i_6])) | (((/* implicit */int) arr_25 [i_6] [i_5]))))));
                var_31 = arr_20 [i_5] [i_6];
                arr_26 [i_5] [i_5] [i_5] = max(((-(var_11))), (((((var_16) ? (8873258293673131684LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (var_4))));
                arr_27 [i_5] [i_5] = ((((((/* implicit */_Bool) 2287828610704211952LL)) ? (max((arr_23 [i_5]), (((/* implicit */long long int) arr_25 [i_5] [i_5])))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) + (((/* implicit */long long int) ((/* implicit */int) var_3))));
            }
        } 
    } 
}

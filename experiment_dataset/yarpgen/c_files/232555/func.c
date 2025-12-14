/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232555
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((min((3140606090669932919LL), (((/* implicit */long long int) (!((_Bool)1)))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 *= ((/* implicit */short) min(((((+(var_4))) % (min((var_16), (((/* implicit */int) var_3)))))), (min((arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 2]), (var_1)))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) -1041419685))));
                }
            } 
        } 
        arr_9 [7] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) > ((+(2147483633)))));
    }
    var_21 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((long long int) (unsigned short)11851)))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / ((-(var_14)))))) ? (((/* implicit */int) arr_4 [i_3 - 3])) : (((((int) 11209248057680086363ULL)) + ((((_Bool)0) ? (((/* implicit */int) (unsigned short)54895)) : (((/* implicit */int) (unsigned char)119)))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
}

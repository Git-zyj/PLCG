/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41259
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
    var_18 = ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_17)))))) || (((/* implicit */_Bool) (-(min((var_8), (var_8)))))))))));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) arr_7 [i_2 - 3] [i_1 - 2] [i_1] [i_1])))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) var_4)), (var_8)))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 22; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    arr_19 [i_3] [(_Bool)1] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_3 - 1]))) : (var_17)));
                    var_21 = (-(((unsigned long long int) 1125895611875328LL)));
                }
            } 
        } 
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((_Bool) (unsigned char)198)))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    var_23 -= ((/* implicit */short) ((((/* implicit */int) var_12)) % (var_8)));
                    arr_25 [i_3] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (~(arr_10 [i_3])));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        var_24 = (((((((-(((/* implicit */int) var_15)))) + (2147483647))) << (((((/* implicit */int) arr_23 [i_8] [i_8])) - (61))))) & ((-(((((/* implicit */int) arr_11 [i_8])) * (((/* implicit */int) arr_23 [i_8] [i_8])))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_1))));
        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)41))));
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_8]))));
        var_28 = ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_10 [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    }
}

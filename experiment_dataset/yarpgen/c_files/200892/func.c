/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200892
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) -6972417736297516467LL);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(var_0))) : (((((/* implicit */int) var_2)) | (((/* implicit */int) (short)6226))))))) & (((unsigned long long int) arr_0 [i_0 + 2]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (+(((4738990177782299537ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_1]))) : (var_7))))))));
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_7 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) : (var_5))))), (((/* implicit */unsigned long long int) ((signed char) (+(67100672)))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min(((-(((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (-(9375012112259243878ULL)))) ? (var_5) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6]))) / (6522398988563500974ULL))))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) -4631560904852108093LL))));
                }
            } 
        } 
        arr_20 [i_4] = ((/* implicit */signed char) max((((arr_18 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)6226)) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4]))))));
        arr_21 [22ULL] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) | (((((/* implicit */_Bool) arr_17 [18LL] [i_4])) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)102)), ((unsigned short)24418)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) : ((+(809623983184713906LL)))));
        arr_24 [i_7] = (+(((/* implicit */int) arr_4 [i_7] [i_7] [i_7])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) (signed char)0))));
        var_17 = ((int) arr_15 [i_8]);
    }
}

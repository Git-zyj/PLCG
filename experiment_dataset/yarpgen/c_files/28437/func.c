/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28437
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((var_3), (var_2))) : (((int) max(((unsigned char)97), (((/* implicit */unsigned char) var_12)))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((unsigned int) 6818254902654480963ULL)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4772746191092786209LL)), (6818254902654480940ULL)))) ? (((/* implicit */long long int) ((int) var_4))) : (var_4)))) ? (min((var_3), (var_11))) : (((/* implicit */int) var_0))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) (+((-(22ULL)))));
            arr_8 [i_0] = ((/* implicit */long long int) ((unsigned int) (+(((long long int) arr_2 [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) % (-2LL)))) ? (11628489171055070660ULL) : (min(((~(arr_7 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_4]))) + (25LL))))))));
                        arr_19 [i_0] = ((/* implicit */unsigned char) (-(((var_0) ? (((/* implicit */int) max((var_1), (var_7)))) : (((/* implicit */int) var_12))))));
                        arr_20 [i_0] = ((/* implicit */_Bool) var_13);
                    }
                } 
            } 
            arr_21 [i_0] [i_0] [i_0] = ((((var_10) + (2147483647))) << (((((arr_11 [i_0] [i_0]) / (arr_11 [i_2] [i_0]))) - (1))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_0 [i_2]))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 6818254902654480975ULL)) && (((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) 0)), (11628489171055070660ULL))) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_0]))))) ? (min((11628489171055070676ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)-86))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2])))));
            var_21 = ((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_2] [i_0]);
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_25 [i_0] [i_5] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
            var_22 = 12;
        }
        var_23 += arr_4 [i_0] [i_0] [i_0];
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_36 [i_9 - 1] [i_8] [i_7] = ((/* implicit */_Bool) arr_0 [i_8]);
                        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -1035709425)) ? (((/* implicit */unsigned long long int) arr_6 [i_6] [i_9])) : (6818254902654480963ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_37 [i_9 - 1] [i_8] [i_7] = ((/* implicit */int) (signed char)1);
                    }
                } 
            } 
        } 
        var_25 *= (_Bool)1;
        var_26 = ((/* implicit */int) arr_31 [i_6] [i_6] [i_6]);
        arr_38 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_15))))) != (min((((/* implicit */int) (signed char)-86)), (-1035709425)))));
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) -23)) % ((+(6818254902654480960ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}

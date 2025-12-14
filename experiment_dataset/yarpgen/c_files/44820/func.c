/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44820
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)66)) : (-697510605)));
    var_17 = ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)86)) | (((/* implicit */int) (unsigned char)184)))), (max((((/* implicit */int) (unsigned char)72)), (var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (var_13)))))) : ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)207);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((arr_0 [(unsigned char)0]) ? (((((/* implicit */_Bool) -4689145368188028429LL)) ? (18014329790005248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2]))))))))));
                    arr_8 [i_1] [i_1] [i_0] [i_0] = min((max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0)))), (((((var_7) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1658381976)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [(_Bool)1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (unsigned char)196))))))));
                    arr_9 [(_Bool)1] [(_Bool)1] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [(_Bool)1] [i_2] [(unsigned short)3] [i_0]))) ? (((/* implicit */long long int) (-(arr_1 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) 1658381976)) : (var_10)))));
                    arr_10 [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned char)180)))) ? (min((((((/* implicit */_Bool) -366124552)) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_0]))), (((((/* implicit */int) (_Bool)1)) << (((arr_7 [11] [i_2] [11] [i_2]) - (145045006U))))))) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [(signed char)18])) - (((((((/* implicit */_Bool) (short)30450)) ? (18428729743919546369ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                }
            } 
        } 
    } 
}

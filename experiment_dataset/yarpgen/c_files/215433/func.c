/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215433
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
    var_12 = ((/* implicit */short) (unsigned char)21);
    var_13 -= -7879272102292580664LL;
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)46935))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2607263142070731440LL)) ? (0U) : (4294967295U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) (unsigned short)0))))))))))));
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2986545808U) << (((((/* implicit */int) var_4)) - (76)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)219)))) : (((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) (unsigned char)21)) : (-523927301))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
                    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((((/* implicit */_Bool) 11U)) ? (arr_1 [i_0]) : (((/* implicit */int) var_4)))))), ((-(((/* implicit */int) var_2))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((4294967287U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-4299))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)227)), ((unsigned short)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((-523927291) < (((/* implicit */int) (unsigned short)2))))) % (((/* implicit */int) (unsigned short)20249)))))));
                    var_19 = max((((arr_0 [i_1 - 2]) | (arr_0 [i_1 - 2]))), (min((((/* implicit */long long int) var_5)), (arr_3 [i_0]))));
                    var_20 = ((/* implicit */unsigned int) arr_6 [i_0] [i_2]);
                }
            } 
        } 
    } 
}

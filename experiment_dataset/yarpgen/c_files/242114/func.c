/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242114
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
    var_20 = ((/* implicit */int) var_13);
    var_21 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((arr_0 [i_0] [i_0]) & (((/* implicit */int) var_8)))) * (((/* implicit */int) var_19)))) != (((/* implicit */int) var_2)))))));
        var_23 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)37176)) != (-1513021682)));
        var_24 = ((/* implicit */unsigned long long int) ((signed char) min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))));
        var_25 = arr_2 [i_0] [i_0];
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_26 = var_11;
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) min((max((((var_4) & (((/* implicit */int) (_Bool)1)))), (min((0), (((/* implicit */int) (short)-3186)))))), ((~(((/* implicit */int) (unsigned char)240))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (max((-1513021682), (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_8)) ? (695380590) : (((/* implicit */int) (unsigned char)243)))))))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_7 [i_1] [(_Bool)0] [i_1 - 2])))) || (((/* implicit */_Bool) 4294967295U))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (_Bool)1)), (var_11))), (arr_13 [12] [12])))) ? (((/* implicit */int) arr_1 [i_1 - 1])) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)10018)))))))));
    }
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_6))));
        var_32 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)5638)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)8227)))), (((/* implicit */int) (_Bool)1))));
        var_33 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)6634)) : (((/* implicit */int) (short)-4036)))));
    }
    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_34 = ((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
            var_35 = ((((/* implicit */_Bool) (short)32748)) ? (1202924705U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_36 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)-32767))));
                    var_37 = ((((((/* implicit */int) arr_22 [i_8])) ^ ((+(((/* implicit */int) (unsigned char)63)))))) / (695380585));
                }
            } 
        } 
    }
}

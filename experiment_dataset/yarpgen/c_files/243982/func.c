/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243982
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((max((var_7), (max((((/* implicit */unsigned int) arr_0 [i_0])), (1762881347U))))) > (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((signed char) var_11))) : (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (short)4504)))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4488)) ? (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1762881368U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? (max((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)24710))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)56))))) ? (((2482472468U) / (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) var_2))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-12))))) ? (((/* implicit */int) arr_5 [i_0 + 3])) : (((/* implicit */int) (short)-4488))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0])) == (((/* implicit */int) arr_1 [i_0 + 3]))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_17 [i_5] [i_4] [i_0] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) 1023U)))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) (short)30656))) ? (((/* implicit */int) (short)7629)) : (((((/* implicit */_Bool) (short)384)) ? (((/* implicit */int) arr_15 [i_4] [i_5] [9U] [i_4] [i_3] [i_2] [i_0])) : (((/* implicit */int) var_5)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2491849727U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)65534)) : (((((/* implicit */_Bool) (short)-4483)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) (short)-4515)))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_2] [(unsigned char)12] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_16 [(short)0] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]))) << (((((/* implicit */int) max((arr_24 [i_0] [i_2] [i_0] [i_0 + 3] [i_6 - 1]), (arr_24 [i_0] [i_2] [i_2] [i_0 + 3] [i_6 - 1])))) - (17067)))));
                            var_21 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (short)-4524)))), ((((((_Bool)1) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) (unsigned short)46838)))) <= (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned int) var_12);
    }
    for (short i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((max((arr_11 [i_9]), (arr_23 [i_9] [i_9] [i_9] [i_9]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-10458)), (arr_20 [i_9] [i_9] [i_9]))))))));
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)4485)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52480))) : (arr_13 [i_9] [6U] [i_9] [i_9]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) : (var_15)))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) <= (((/* implicit */int) (short)4495))))) : (((/* implicit */int) arr_4 [i_9 + 2] [i_9] [i_9]))))));
    }
    var_24 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) || (((/* implicit */_Bool) (unsigned char)147))))) : (((/* implicit */int) (_Bool)1))));
    var_25 = ((/* implicit */unsigned int) min((var_25), (((var_12) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_16)))))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    var_26 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (short)2040)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)14755))))))));
    var_27 = ((/* implicit */unsigned short) var_19);
}

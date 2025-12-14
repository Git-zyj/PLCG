/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31121
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32765)))), (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_14)) & (((/* implicit */int) (short)-32763)))))) : (((/* implicit */int) ((_Bool) min((var_13), (var_13)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) * (((((/* implicit */int) var_2)) / (((((/* implicit */_Bool) 12749274836999941197ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-989)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_16))));
    var_21 |= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_1 [i_0])))))) <= (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (743566120U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12900)))))))) ? (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (short)989)))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)253)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)231)), ((unsigned short)65535)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_13))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) (unsigned char)15);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_4 - 1] [i_1 + 1]))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)114)))) > (((/* implicit */int) arr_10 [i_1 + 1]))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) min((var_27), (((unsigned char) arr_10 [i_1]))));
            arr_14 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)74))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (short i_6 = 4; i_6 < 7; i_6 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (short)-20736))));
                        var_29 ^= ((/* implicit */_Bool) ((((unsigned int) 8243345417206045792ULL)) * (var_6)));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (short)1305)))))))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 7; i_8 += 2) 
            {
                {
                    var_32 = ((/* implicit */_Bool) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_33 = (unsigned char)184;
                                var_34 ^= ((/* implicit */unsigned short) ((short) (short)-19843));
                                arr_32 [i_1 + 1] [i_9] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4891))) : (var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

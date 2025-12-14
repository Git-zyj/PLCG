/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241408
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_4))))))) : (var_2)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */int) var_6)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)2616))))), (max((((/* implicit */long long int) min((((/* implicit */int) var_6)), (-1163000323)))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_0)))))));
            arr_6 [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)77)))), (var_2))));
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((var_3), (((/* implicit */int) var_1)))) : (((/* implicit */int) max(((short)13322), (var_6))))))) ? (min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_2))))), (130048ULL))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)13343))))), (min((((/* implicit */unsigned long long int) var_6)), (18446744073709551612ULL)))))));
            arr_10 [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), ((((((_Bool)0) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >> (((max((var_7), (((/* implicit */long long int) var_2)))) - (3970240417LL)))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */int) var_4);
                        var_11 = ((/* implicit */unsigned short) (short)-13337);
                        var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)13343), (var_5)))) && (((/* implicit */_Bool) min((var_3), (var_3))))))), (min((((/* implicit */unsigned long long int) (-(-6108579139321250704LL)))), (max((((/* implicit */unsigned long long int) var_0)), (10ULL)))))));
                        arr_16 [i_4] [0LL] [i_2] [(unsigned short)9] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)15977)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((2426663954307535817ULL), (2426663954307535810ULL))))));
                    }
                } 
            } 
        }
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((/* implicit */int) var_6)))))));
        arr_17 [i_0 + 2] = ((/* implicit */unsigned short) min((max((-721820372), (((/* implicit */int) (unsigned short)49558)))), (((/* implicit */int) min((((/* implicit */short) var_8)), ((short)4944))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)13365))) < (var_7)));
        var_14 = ((/* implicit */int) var_7);
    }
    var_15 &= ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) min(((signed char)56), (var_8)))), ((~(((/* implicit */int) var_8))))))), (max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) var_5)), (var_7)))))));
    /* LoopNest 3 */
    for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        for (signed char i_7 = 2; i_7 < 16; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    arr_32 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */long long int) max((var_6), ((short)13343)))), ((~(var_7))))));
                    var_16 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((1198815411) - (((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
}

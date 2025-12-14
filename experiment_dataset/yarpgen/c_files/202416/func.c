/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202416
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_13 *= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) var_9)))))));
        arr_4 [i_0] = ((/* implicit */int) ((min((min((var_6), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_12))))))) ^ (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) var_10)), (var_1)))))));
        var_14 = ((/* implicit */short) var_5);
    }
    for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) var_11)), (var_4))))));
                        var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)50)), ((short)18879)))))), (((/* implicit */int) var_0))));
                        var_17 |= ((/* implicit */unsigned short) 747859766);
                        arr_18 [i_3] [i_2] [i_2] [i_3] |= ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (((unsigned short) var_0))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 2) 
        {
            for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_11))))) ? ((-(var_10))) : ((+(((/* implicit */int) var_7))))));
                        var_19 = ((/* implicit */signed char) min((((11059474653432083185ULL) - (((/* implicit */unsigned long long int) min((-1556198129), (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((17126570404185706855ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764)))))) + (((/* implicit */int) ((unsigned short) var_0))))))));
                        arr_27 [11U] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) (~(min((min((((/* implicit */unsigned long long int) var_9)), (11059474653432083199ULL))), (((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))))))))));
                        arr_28 [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65533))))), (min((min((var_1), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (0) : (((/* implicit */int) var_2)))))))));
                        arr_29 [i_1 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((747859766), (((/* implicit */int) (unsigned char)84)))) >> (((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (1311367579U)))))) ? (((unsigned int) var_2)) : (var_6)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((((min((((/* implicit */int) var_3)), (var_10))) + (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)56054)))))) / (((/* implicit */int) var_5))));
        arr_30 [i_1] = ((/* implicit */unsigned long long int) var_5);
    }
    for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        var_21 = ((/* implicit */long long int) (((~((+(((/* implicit */int) var_8)))))) >= (((/* implicit */int) var_11))));
        arr_35 [i_8] [i_8 + 2] = ((/* implicit */int) ((unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-32765))))), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_5)))))));
        var_22 = ((((unsigned long long int) max((((/* implicit */short) var_9)), (var_7)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))));
        var_23 = ((/* implicit */unsigned short) var_3);
    }
    var_24 &= ((/* implicit */unsigned short) var_6);
}

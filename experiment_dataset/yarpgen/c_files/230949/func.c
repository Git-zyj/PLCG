/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230949
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
    var_13 = ((/* implicit */int) 2593152757932307060ULL);
    var_14 |= ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 4; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) (-(((long long int) arr_4 [i_0] [i_0] [i_0]))));
                        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0]))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_1))));
                    }
                } 
            } 
        }
        var_18 = (_Bool)1;
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_8 [i_4] [(_Bool)1] [i_4] [i_4]);
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            for (unsigned int i_6 = 4; i_6 < 16; i_6 += 4) 
            {
                {
                    var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_6]))));
                    var_21 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)15));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4677794662552924090LL))))))));
                                var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_5] [i_6] [i_6] [i_6]))) - (17179586207851392592ULL))));
                                var_24 |= ((((/* implicit */_Bool) arr_6 [i_6] [i_4] [i_6] [i_7])) ? (((/* implicit */int) arr_6 [i_8] [i_4] [i_4] [i_8])) : (((/* implicit */int) arr_6 [i_8] [i_5 + 2] [i_6] [i_7])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)9965))))) : (1267157865858159022ULL)));
                }
            } 
        } 
        arr_25 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58965)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!((_Bool)1))))));
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1]))) < (arr_13 [i_4] [i_4] [i_4])));
        arr_26 [i_4] = ((/* implicit */_Bool) ((unsigned int) (+(var_7))));
    }
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (((unsigned int) (_Bool)0)) : (var_8)))));
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 4; i_11 < 11; i_11 += 2) 
            {
                for (unsigned int i_12 = 4; i_12 < 9; i_12 += 2) 
                {
                    {
                        arr_40 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9] [i_12] [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */short) (_Bool)1)))))) : (var_8)));
                        var_28 = ((/* implicit */long long int) ((unsigned long long int) 3004083373U));
                        var_29 = ((/* implicit */int) ((unsigned long long int) var_9));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (((-(arr_9 [i_9] [i_10] [i_11 - 4] [i_12]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))))))));
                    }
                } 
            } 
        } 
        arr_41 [i_9] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) ((_Bool) 4ULL))) << (((var_2) - (17858126106890905410ULL))))));
    }
    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        var_31 = ((/* implicit */long long int) max((var_31), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [(unsigned short)16] [i_13] [i_13])) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) var_12)))))) : ((~(var_12)))))));
        arr_44 [i_13] [i_13] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_4 [(short)4] [(short)4] [i_13])))));
        var_32 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_2))) & (((/* implicit */unsigned long long int) 7923386700319262479LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))))));
        var_33 = ((/* implicit */short) max((var_33), (((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_31 [i_13] [i_13])) : (((/* implicit */int) arr_31 [i_13] [i_13])))))));
    }
    var_34 = ((long long int) ((long long int) ((long long int) (unsigned char)2)));
    var_35 = ((/* implicit */long long int) (-(((/* implicit */int) (short)9965))));
}

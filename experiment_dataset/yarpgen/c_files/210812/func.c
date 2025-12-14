/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210812
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)61451)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)61446)) <= (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))))))) : (((((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)18])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5))) * (((/* implicit */long long int) 25U))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3901227127U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61446))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned short)57201)) : (((/* implicit */int) (unsigned short)61446))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)25921))))) : (var_5)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)61444)) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) (unsigned short)32838))));
                var_14 *= ((/* implicit */unsigned char) 393740169U);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_4])), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4]))) : (var_5)))));
        arr_12 [i_4] = arr_10 [i_4] [(unsigned char)7];
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) var_9);
                        arr_21 [i_4] [i_5 - 1] [i_6] [i_7] = (-(2069251654));
                        var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) / (var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)36912))))) : (4294967270U)))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        var_18 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [16LL])) / (((/* implicit */int) var_8))))) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8])) ? (34084860461056LL) : (var_5)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)4093)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_8))));
                    }
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 34084860461056LL))));
                    arr_24 [i_4] [i_4] = ((unsigned char) ((((/* implicit */_Bool) 2069251643)) ? (((((/* implicit */_Bool) arr_11 [(signed char)3])) ? (((/* implicit */long long int) 13U)) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_10)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) var_3)))))));
    }
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)59)) == (((((/* implicit */_Bool) -6300394255073445509LL)) ? (((/* implicit */int) arr_27 [i_9] [i_9])) : (((/* implicit */int) (unsigned char)149))))));
        var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_10 [i_9] [i_9])), (34084860461056LL))) >> (((((((/* implicit */_Bool) arr_10 [i_9] [i_9])) ? (((272845817044059908LL) | (((/* implicit */long long int) 4294967283U)))) : (((/* implicit */long long int) arr_10 [i_9] [i_9])))) - (272845820477308893LL)))));
    }
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
    {
        var_24 = -1563052446;
        arr_32 [(unsigned char)9] = ((/* implicit */unsigned short) (unsigned char)102);
    }
    /* vectorizable */
    for (long long int i_11 = 1; i_11 < 23; i_11 += 2) 
    {
        arr_36 [i_11] [i_11 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [(unsigned short)18])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65533))))));
        var_25 *= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        for (unsigned char i_13 = 1; i_13 < 18; i_13 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_7 [i_13 - 1] [i_13 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (-6300394255073445509LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)89))))) : (((((/* implicit */_Bool) 6300394255073445497LL)) ? (393740168U) : (4U)))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_7 [i_13 + 1] [i_12])))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) == (7162309641295681476LL)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (4294967283U)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) 129061204U)))))))));
                var_29 = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32838))) | (arr_9 [i_12] [i_12]))), (((/* implicit */unsigned int) var_8)))) < (((/* implicit */unsigned int) (~(0))))));
            }
        } 
    } 
}

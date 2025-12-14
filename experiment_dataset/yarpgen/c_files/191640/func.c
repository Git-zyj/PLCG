/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191640
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)86))))) * (((((/* implicit */_Bool) ((unsigned char) var_2))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) (signed char)113);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_3 - 3] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)9588)) / (var_15)))));
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4194303LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11501))) : (var_3))))));
                        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_21 = ((/* implicit */_Bool) (~(6U)));
            var_22 = ((/* implicit */long long int) (_Bool)1);
            arr_14 [i_0] = ((/* implicit */signed char) 19LL);
        }
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_23 = ((/* implicit */short) var_11);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_19 [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                var_24 = ((/* implicit */short) (unsigned char)83);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        {
                            arr_31 [i_5] [i_8] [i_7] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (9007199254739968LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_17) && ((_Bool)1)))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
        {
            var_26 = ((/* implicit */int) (+(((unsigned int) (!(((/* implicit */_Bool) (short)-19764)))))));
            arr_35 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)0)))))))));
        }
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 2; i_12 < 12; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    {
                        var_27 += ((/* implicit */_Bool) -4840913353116696383LL);
                        arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4840913353116696368LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((930530233030261523ULL), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((var_4) - (1922750525))))))))) ? ((+(((/* implicit */int) var_16)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        arr_45 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4106321337591687780ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-96)))))))) : ((-(((/* implicit */int) (short)5945))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    {
                        arr_50 [0LL] [i_11] [i_14] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))))))));
                        arr_51 [i_5] [i_5] = ((/* implicit */long long int) max((max(((unsigned short)30429), (((/* implicit */unsigned short) (unsigned char)80)))), (((/* implicit */unsigned short) max(((unsigned char)20), (((/* implicit */unsigned char) var_5)))))));
                        arr_52 [i_15] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~((~((+(var_2)))))));
                    }
                } 
            } 
        }
    }
    for (int i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        arr_55 [i_16] [i_16] = ((/* implicit */unsigned short) (((~(5U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (_Bool)1))))))));
        arr_56 [i_16] = min((((/* implicit */unsigned long long int) (~(var_12)))), (((unsigned long long int) var_0)));
        var_28 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) (~(((/* implicit */int) var_17))))) % (min((var_3), (((/* implicit */long long int) (unsigned char)255))))))));
        arr_57 [i_16] = ((/* implicit */int) (~((+(var_13)))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) / (min((((/* implicit */long long int) (_Bool)1)), (var_10)))))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_17)), (4590171420749213981ULL))) >= (((/* implicit */unsigned long long int) var_10)))))));
    var_30 = ((/* implicit */int) var_5);
    var_31 = var_7;
    var_32 = ((/* implicit */unsigned char) 4294967291U);
}

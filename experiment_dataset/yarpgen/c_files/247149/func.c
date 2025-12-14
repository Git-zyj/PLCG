/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247149
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) ((long long int) -742708249))));
        var_19 = ((/* implicit */int) ((((unsigned long long int) (!(arr_1 [i_0] [i_0])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0 + 1] [2ULL]) >> (((((/* implicit */int) var_8)) - (27800))))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 ^= (-(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))));
                    var_21 ^= ((/* implicit */unsigned short) (!(((((int) var_16)) == (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (!((_Bool)0))))))));
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) (~(((var_2) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_5]))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0)))) >> (((((((/* implicit */int) var_13)) * (((/* implicit */int) (_Bool)1)))) + (3489))))))));
                        }
                        for (unsigned int i_6 = 4; i_6 < 7; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned int) ((unsigned short) (-(((/* implicit */int) var_17)))))))));
                            var_27 = ((/* implicit */int) ((unsigned short) (-(((((/* implicit */int) (unsigned char)30)) / (((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_17 [i_0] [i_1] [i_1] [i_1] [6ULL] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) <= ((~((-(((/* implicit */int) var_17))))))));
                        var_28 = ((/* implicit */unsigned int) (~((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        arr_18 [(unsigned char)1] [i_1] [i_2] [i_4] &= ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */int) var_16)) != (((/* implicit */int) arr_10 [i_0]))))))) & ((-(((/* implicit */int) (_Bool)1))))));
                        var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((((/* implicit */_Bool) arr_14 [i_0] [4ULL] [i_0] [4ULL] [i_1] [i_4])) || (((/* implicit */_Bool) var_12)))))))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) ((unsigned long long int) ((short) (-(var_2)))));
                        arr_21 [i_7] [i_7] = ((/* implicit */unsigned char) ((int) (~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)1)))))));
                        var_31 = (-((+(((((/* implicit */int) (short)4101)) << (((((-1) + (20))) - (13))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) (+((+(-3)))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) arr_3 [0] [0])) / (var_10)))))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((_Bool) ((short) 4294967281U)))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            var_34 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((unsigned short) (unsigned short)33740))))) || (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4101))) & (2437999215773607350ULL))))))));
                            var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3044505783U)));
                            var_37 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) 10)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_7] [i_10] = ((/* implicit */short) ((int) ((unsigned long long int) (!(((/* implicit */_Bool) var_3))))));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) ((signed char) arr_22 [i_1])))))))));
                        }
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((-6974644696939166661LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) ((unsigned short) 6U))))))))));
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        arr_31 [i_0 - 1] [i_1] [(unsigned short)6] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((+((-2147483647 - 1))))))) < ((-(((unsigned long long int) arr_10 [i_11]))))));
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(4294967295U)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_16 [i_11] [i_1] [i_11] [i_11] [i_1])) == (((/* implicit */int) var_11))))))))));
                        var_41 = ((/* implicit */unsigned short) (((+(((int) (signed char)-73)))) < ((-((-(((/* implicit */int) var_13))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 16; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 3; i_15 < 18; i_15 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_13]))))) < ((-(((/* implicit */int) (short)-4107))))))) > ((((((-(((/* implicit */int) arr_32 [2LL])))) + (2147483647))) << ((((((-(((/* implicit */int) (_Bool)1)))) + (20))) - (19)))))));
                            var_43 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) + (((/* implicit */int) var_5))))))))));
                        }
                    } 
                } 
                arr_43 [1] [i_13] = ((/* implicit */short) (((((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((unsigned short) (unsigned char)251))))) < ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            }
        } 
    } 
}

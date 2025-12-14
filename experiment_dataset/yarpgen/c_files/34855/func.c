/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34855
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3)))))))));
                    var_12 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(-5371817368002161758LL))))))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) ((unsigned char) min(((~(var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
        arr_9 [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_8))))), (var_2))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_9))))))))));
        var_14 -= ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        arr_22 [i_4] [0LL] [i_5] [i_6] = ((/* implicit */unsigned char) (((((-(var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_2))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (471698222296209483LL)))))));
                        arr_23 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((+(5371817368002161757LL))), (var_0)))), (min((var_3), (((/* implicit */unsigned long long int) ((_Bool) var_9)))))));
                        arr_24 [i_4] [(signed char)3] [i_4] [i_5] = ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) var_10);
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_3))));
        arr_27 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((short) var_6))))))) * (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (min((((/* implicit */unsigned int) var_8)), (var_5)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned char) var_6);
                            arr_39 [11U] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((long long int) var_8)))))));
                            var_18 = ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (-(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_7))))))))));
                            var_19 ^= ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_12 = 2; i_12 < 14; i_12 += 1) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_4))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        arr_45 [i_9] [i_12] [i_9] [i_9] = ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (unsigned short)42956))))))) | ((-(((/* implicit */int) ((signed char) var_4)))))));
                        var_21 = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                    {
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) == (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_23 = (((-((~(-471698222296209488LL))))) > (((/* implicit */long long int) (+(((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))))))));
                        var_24 -= ((/* implicit */long long int) ((unsigned short) ((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) (+(var_10)))))));
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) var_0))) ^ (var_3))))));
                        arr_48 [i_12] [i_9] = var_5;
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((((int) ((short) -471698222296209483LL))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4016))) == (471698222296209515LL))))));
                        var_27 = ((/* implicit */signed char) ((long long int) var_3));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_28 ^= ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_3))) / (var_3))) / (((/* implicit */unsigned long long int) ((long long int) var_7)))));
                        arr_54 [i_9] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                        var_29 = ((/* implicit */long long int) var_6);
                    }
                    for (unsigned char i_17 = 2; i_17 < 16; i_17 += 3) 
                    {
                        var_30 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))))), (((unsigned long long int) var_4))));
                        var_31 = ((/* implicit */unsigned char) var_0);
                        var_32 = ((unsigned int) 0LL);
                        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        arr_59 [i_17] [i_9] [i_12] [i_9] [i_8 + 2] = ((short) ((((/* implicit */unsigned long long int) var_5)) * (var_3)));
                    }
                }
                for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    arr_64 [i_18] [i_9] = ((/* implicit */short) var_10);
                    var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_9))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))));
                    var_35 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 4294967287U))) % (((/* implicit */int) ((((/* implicit */_Bool) 471698222296209505LL)) || (((/* implicit */_Bool) (unsigned char)192))))))))));
                    arr_65 [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_1)), (var_7))))) % (((unsigned int) var_1))))));
                    arr_66 [i_9] [i_18] [i_18] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                }
                arr_67 [i_8] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) - (var_3))))));
                arr_68 [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                arr_69 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (min((var_8), (var_6))))))) <= (((unsigned int) var_8))));
            }
        } 
    } 
}

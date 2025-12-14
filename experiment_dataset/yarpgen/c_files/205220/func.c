/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205220
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [3]);
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) 17574812999037408640ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)112)))))) != (((/* implicit */int) (signed char)-106))));
        var_16 = ((/* implicit */_Bool) 8594107029673965329ULL);
        arr_4 [i_0] [i_0] = arr_0 [(signed char)13];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % ((-(1417386542U)))));
                        var_18 = ((/* implicit */unsigned int) ((_Bool) (signed char)127));
                    }
                } 
            } 
            var_19 &= ((/* implicit */int) (-(arr_9 [i_2 + 1] [i_2 - 3] [i_2 - 4] [i_2 - 1])));
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_20 -= ((/* implicit */short) arr_5 [i_5]);
            arr_17 [i_1] = ((/* implicit */long long int) (((+(var_9))) % (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_13)) : (var_10)))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_10))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                arr_24 [i_1] [i_1] = arr_23 [i_1] [i_1] [i_1];
                var_22 = ((signed char) (unsigned char)207);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned int i_9 = 4; i_9 < 13; i_9 += 4) 
                    {
                        {
                            arr_31 [i_1] [i_9 + 2] = ((/* implicit */unsigned short) ((arr_25 [i_7 + 1] [i_8 - 2] [i_8 - 2] [i_8]) == (((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 2] [i_8 - 2]))));
                            var_23 = ((/* implicit */unsigned int) arr_22 [i_6] [i_6]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    var_24 *= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    var_25 = ((/* implicit */int) ((unsigned short) ((7700588347252632977LL) >> (((((/* implicit */int) (unsigned char)121)) - (87))))));
                    var_26 = ((/* implicit */unsigned int) ((var_8) / (((/* implicit */int) arr_29 [i_1] [i_6] [i_6] [i_1]))));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) (~((~(arr_5 [i_6])))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_11] [i_6]))) ? (30720U) : (((/* implicit */unsigned int) var_10)))))));
            }
            var_29 = ((/* implicit */short) (-(((/* implicit */int) (signed char)105))));
        }
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_42 [i_1] [i_1] = ((/* implicit */long long int) ((((2877580729U) > (((/* implicit */unsigned int) arr_7 [i_1])))) ? (((((arr_20 [i_1] [i_1] [i_1] [(signed char)1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1009889502)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5294213255814651724LL))))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) + ((-(((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_12] [4U] [i_14]))))))))));
                        arr_43 [i_1] [i_1] [i_13] [i_14] = ((/* implicit */unsigned char) (((-(arr_25 [6U] [i_12] [i_13] [7LL]))) % (((/* implicit */int) max(((unsigned char)112), (((/* implicit */unsigned char) arr_33 [i_1] [i_1] [i_12] [(signed char)4] [(signed char)4])))))));
                        var_31 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (7663427811517209561LL)));
                        arr_44 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((int) var_2)) - (((/* implicit */int) ((signed char) 4294967280U)))))));
                    }
                } 
            } 
        } 
    }
    var_32 = (+(var_8));
    var_33 = ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
}

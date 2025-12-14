/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235473
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
    for (int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (!((!(((/* implicit */_Bool) (unsigned char)162)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? ((+(((/* implicit */int) var_4)))) : ((~(-1379012075)))));
    }
    for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        var_10 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_2)))));
        var_11 = ((/* implicit */unsigned short) (+((+(-1379012075)))));
        var_12 = ((/* implicit */signed char) -1379012065);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_11 [(unsigned char)1] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) ((int) (signed char)15));
                arr_12 [2U] [2U] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                arr_13 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned short i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        {
                            arr_18 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (+(268304384U)));
                            arr_19 [i_1] [i_3] |= ((/* implicit */unsigned char) (~(var_2)));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
            }
            for (unsigned long long int i_6 = 4; i_6 < 6; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 2; i_7 < 7; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 4026662912U))));
                        var_15 = (signed char)15;
                        arr_26 [(signed char)2] [i_2] [i_6] [0ULL] [i_7 - 2] [(signed char)5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                        arr_27 [1LL] [i_1] [i_1] [i_2 + 1] [i_6 - 2] [i_7] [i_8 - 2] |= ((/* implicit */unsigned char) (-((~(1379012082)))));
                    }
                    var_16 = ((/* implicit */_Bool) (~(-1379012065)));
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))));
                    var_18 = ((/* implicit */unsigned short) ((short) 268304384U));
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_19 = ((/* implicit */int) ((unsigned short) var_1));
                    arr_31 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)67))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(4294967295U)))));
                    arr_32 [i_1] [i_1] [i_6] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)78))));
                    arr_33 [i_1 - 2] [(unsigned char)1] [i_6] [i_9] = (-(((/* implicit */int) var_4)));
                }
                arr_34 [i_1] [i_1] [i_2] [i_6] |= var_6;
                var_20 = ((/* implicit */int) ((unsigned char) (~(1822666950748081453LL))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? ((-(((/* implicit */int) (unsigned char)242)))) : (var_5)));
            }
            for (unsigned long long int i_10 = 4; i_10 < 6; i_10 += 3) /* same iter space */
            {
                arr_38 [i_10] [i_1] [i_10] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)11));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-2)) ? (var_5) : (((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned int) var_7)))));
                    arr_41 [i_1] [i_11] [i_10] [i_11] [i_10] |= ((/* implicit */unsigned int) (unsigned char)11);
                }
                arr_42 [i_10] = ((/* implicit */_Bool) (+(var_2)));
                arr_43 [i_1] [i_10] [i_10] = ((/* implicit */_Bool) (signed char)0);
            }
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) 4645583107185541101ULL))))))));
            var_25 = ((/* implicit */long long int) ((unsigned int) (signed char)-31));
        }
        /* vectorizable */
        for (signed char i_12 = 3; i_12 < 9; i_12 += 2) 
        {
            arr_48 [i_12] [i_12] [i_1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
            arr_49 [i_1 - 1] [i_1] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
            var_26 = ((/* implicit */unsigned int) ((short) var_5));
            var_27 |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_3))))));
        }
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4)))))));
            var_29 = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) ((signed char) var_3))))));
            arr_54 [i_1] [i_1] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
            var_30 = ((/* implicit */signed char) ((unsigned char) 13801160966524010520ULL));
        }
    }
    var_31 -= ((/* implicit */unsigned short) ((((_Bool) 2305843007066210304ULL)) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)92)))))) : (((/* implicit */int) var_6))));
}

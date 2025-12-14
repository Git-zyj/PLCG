/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5371
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
    var_17 = ((/* implicit */unsigned char) var_0);
    var_18 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) / (((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_4 [i_1]))) + (8477410627999144843LL))))), (((/* implicit */int) ((arr_4 [i_1]) >= (arr_4 [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1]))));
        var_23 = ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) arr_1 [i_1]))))) > ((~(((/* implicit */int) var_2)))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */_Bool) (+(1209460575U)));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_11 [i_2 + 1] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)5673)) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (33550336U)))))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2 + 2] [i_2])) < (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_25 ^= ((/* implicit */unsigned short) -7452361422653313979LL);
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                var_26 *= ((/* implicit */unsigned long long int) ((unsigned char) (!(var_15))));
                var_27 = ((/* implicit */signed char) arr_19 [i_2] [i_4] [i_2] [i_2]);
                var_28 += ((/* implicit */unsigned short) ((max((((var_0) ? (16777333725572639992ULL) : (((/* implicit */unsigned long long int) 672514007044213940LL)))), (((/* implicit */unsigned long long int) var_12)))) + (max((((((/* implicit */_Bool) arr_12 [i_5] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_17 [i_2] [i_2] [i_2 + 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_4] [i_5] [i_4] [i_4])))))));
            }
            var_29 = ((/* implicit */long long int) ((((_Bool) ((1920129230U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (1445380737U)))), ((+(arr_19 [i_2] [i_4] [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2 - 1] [i_2 + 2] [i_2])))));
            var_30 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_4] [i_2 + 2])), (var_16)))))))));
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_23 [i_2] [i_6] = ((/* implicit */unsigned short) arr_16 [i_2] [i_6] [i_6]);
            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_2 + 2] [i_2 - 1] [(signed char)17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)775))))) : (((var_15) ? (arr_20 [i_6] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_32 = ((/* implicit */unsigned long long int) 1688248350U);
        }
        var_33 = ((unsigned short) arr_15 [i_2] [i_2] [i_2]);
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                arr_28 [i_2] [i_7] [i_2] = ((/* implicit */unsigned int) arr_17 [i_2] [(_Bool)1] [i_8] [i_8]);
                var_34 *= ((/* implicit */unsigned short) (((((~(max((235661453009662627LL), (((/* implicit */long long int) arr_22 [i_2] [i_7] [i_8])))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((_Bool) var_2))) - (1)))));
            }
            /* LoopSeq 4 */
            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                var_35 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)16256)) || (((/* implicit */_Bool) arr_9 [i_2 - 1] [i_7])))));
                arr_32 [(unsigned short)5] [i_7] [i_9] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-762)) ? (((/* implicit */int) (short)32750)) : ((~(((/* implicit */int) (signed char)101))))))));
            }
            for (long long int i_10 = 1; i_10 < 22; i_10 += 4) 
            {
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [(unsigned char)22] [6LL] [(_Bool)1]))))) ? (max((arr_17 [i_2 - 1] [i_2 - 1] [i_10 - 1] [i_10 - 1]), (((/* implicit */unsigned long long int) 4294967282U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1220889112U)) ? ((~(arr_8 [i_2 - 1]))) : (((/* implicit */long long int) 4261416948U)))))));
                arr_36 [i_2] [i_7] [i_10] = ((/* implicit */unsigned int) var_6);
                var_37 = ((/* implicit */_Bool) (~((((~(((/* implicit */int) arr_14 [i_2] [i_7] [i_10])))) % (((/* implicit */int) max((arr_12 [i_10] [i_2]), (((/* implicit */unsigned short) (short)775)))))))));
            }
            for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_5)))));
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_33 [i_2 + 1] [i_7] [i_2] [i_11])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : ((~(var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 2])))));
            }
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                var_40 *= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46309))) % (max((3856471720U), (((/* implicit */unsigned int) (signed char)57)))))));
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (+(1727232836174021639LL))))));
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) var_13))));
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                {
                    var_43 = ((/* implicit */short) (-((+(((/* implicit */int) var_10))))));
                    var_44 |= ((/* implicit */signed char) var_13);
                    arr_46 [i_2] [22ULL] [i_12] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (9897969486261685574ULL)));
                    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2 + 1] [i_2])) ? (arr_16 [i_2] [i_2 + 1] [(unsigned short)1]) : (arr_16 [i_2] [i_2 + 1] [13LL])));
                }
                var_46 |= ((/* implicit */_Bool) (((~(arr_24 [i_2] [i_7]))) - (((/* implicit */long long int) ((unsigned int) arr_7 [i_2 - 1])))));
            }
        }
        var_47 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31386))) : (7123176411993385016LL)))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18699))))) : ((-(arr_7 [i_2 + 1]))));
        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) 4294967282U)) || (((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46837))) : (3237775637U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2])))));
    }
}

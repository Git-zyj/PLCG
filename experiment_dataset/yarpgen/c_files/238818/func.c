/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238818
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
    var_19 += ((/* implicit */unsigned short) (~(var_8)));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2621))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31128)) ? (((/* implicit */int) (unsigned short)16128)) : (((/* implicit */int) (short)2619)))))));
        var_22 = ((/* implicit */long long int) var_2);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(arr_6 [i_0] [i_1 - 2])));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [i_0] [(_Bool)1])))))))));
            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
            arr_9 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (arr_6 [i_0] [i_2 + 1]))))))))));
                var_25 = ((unsigned char) (+(((/* implicit */int) (unsigned short)65531))));
                arr_17 [i_2] [i_2 - 2] &= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_13)))))) ? (((long long int) (short)2621)) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
            }
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */short) var_0);
                arr_20 [i_2] [i_2] [i_4] &= ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [1]);
                var_27 = ((/* implicit */unsigned short) var_15);
                arr_21 [i_4] [12] [i_4] [i_4] = arr_3 [i_0];
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
                var_29 = ((-1073741824) != (((((/* implicit */_Bool) (short)2620)) ? (((int) (short)-4927)) : (((/* implicit */int) (!(((/* implicit */_Bool) 828121814248699056LL))))))));
                var_30 = var_7;
            }
            for (unsigned short i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-4927)) % (110108701))))));
                arr_26 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                arr_27 [12] [i_2] [i_0] = ((/* implicit */unsigned long long int) 828121814248699056LL);
            }
            arr_28 [i_0] [i_2] = ((/* implicit */int) arr_16 [i_0]);
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) -1034908953))));
            arr_33 [i_0] [i_7] [i_7] = ((/* implicit */int) (~((~(5333219919243811002ULL)))));
        }
        var_33 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)49047)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3758299258827735300LL))));
        var_34 = ((/* implicit */long long int) var_10);
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)186))))) ? (((((/* implicit */int) arr_37 [i_8])) * (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) (!(var_2))))))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8] [i_9])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_12 [i_8] [i_9]))))) ? ((+(((/* implicit */int) arr_12 [i_8] [i_9])))) : (((((/* implicit */_Bool) (unsigned short)13529)) ? (((/* implicit */int) arr_18 [i_9] [i_8] [6])) : (((/* implicit */int) arr_18 [(_Bool)1] [i_9] [(_Bool)1]))))));
        }
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(var_13)))))) ? ((+(13113524154465740592ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)6958)) > (((/* implicit */int) (short)-10157)))))))))));
    }
}

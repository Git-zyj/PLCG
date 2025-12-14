/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28984
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
    var_19 = var_9;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [(signed char)10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) : (((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)2])))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */_Bool) var_4);
                            var_22 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_0] [i_3] [i_3]))))), (arr_2 [i_1 + 3] [i_0]))) << (((((/* implicit */int) var_5)) - (50726)))));
                            var_23 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            var_24 *= ((/* implicit */unsigned short) var_13);
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1])))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_15))))) : ((~((-(-8242092898513670254LL))))))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_25 [i_0] [i_5 + 2] [i_5 + 2] [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_5 + 1] [i_5] [i_5 + 1]) : (((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 - 2]))));
                        var_26 = ((/* implicit */int) min((var_26), ((-(var_17)))));
                    }
                } 
            } 
            var_27 |= ((/* implicit */unsigned int) arr_14 [i_0] [i_5] [i_0] [i_0] [i_0]);
        }
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_28 = ((((((_Bool) (short)-32756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (16851131029111376613ULL))) & (((/* implicit */unsigned long long int) -1942423421)));
        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_28 [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((16851131029111376613ULL), (((/* implicit */unsigned long long int) var_7)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8])))))));
    }
    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 2) /* same iter space */
    {
        var_30 &= ((/* implicit */long long int) ((((long long int) (+(((/* implicit */int) arr_29 [i_9 + 1] [i_9 - 1]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_10 [i_9] [i_9 - 2] [i_9])))))))));
        arr_34 [i_9] = ((/* implicit */int) var_5);
    }
    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_4)) ? (var_13) : (arr_7 [i_10 - 2] [i_10] [i_10]))), (((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [i_10 + 1] [i_10])))), (min((((((/* implicit */int) var_9)) & (arr_5 [i_10] [i_10] [i_10]))), (((arr_14 [i_10 - 2] [i_10 - 2] [i_10] [i_10 - 2] [i_10 + 1]) ? (((/* implicit */int) arr_24 [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) var_15)))))))))));
        arr_37 [i_10] = ((/* implicit */long long int) var_4);
    }
    var_32 = ((/* implicit */long long int) var_11);
    var_33 = ((/* implicit */unsigned int) min((((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))))), (max((var_17), ((+(var_18)))))));
    var_34 *= ((/* implicit */unsigned long long int) (signed char)53);
}

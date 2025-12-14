/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192690
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) << (((var_1) - (717804349U))))))))));
    var_20 = ((/* implicit */unsigned short) ((3279565100U) << (((/* implicit */int) (unsigned char)29))));
    var_21 = ((/* implicit */unsigned char) 3272320997U);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [i_0])))))), (((var_6) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1015402199U)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((unsigned int) 9103832682525922073ULL));
            var_24 += ((/* implicit */long long int) arr_3 [(short)12] [(short)12]);
        }
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) 1015402181U)));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((var_14) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_2] [i_2 - 2] [i_2 - 2] [i_2] [i_3 + 3] [i_5 - 1])) < (((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_3 - 2] [i_5 + 1]))));
                    }
                } 
            } 
            arr_16 [i_2 - 2] [i_2] = ((/* implicit */unsigned short) 3279565110U);
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3])) * (((/* implicit */int) (short)22932))))) != (arr_6 [i_2 + 1] [i_3 + 3])));
        }
        for (unsigned int i_6 = 4; i_6 < 15; i_6 += 2) /* same iter space */
        {
            arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) ((((long long int) 3279565124U)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)230)) >= (((/* implicit */int) var_13)))))));
            var_28 &= ((/* implicit */long long int) (unsigned char)229);
            var_29 = ((/* implicit */signed char) ((_Bool) arr_5 [i_2]));
        }
        for (unsigned int i_7 = 4; i_7 < 15; i_7 += 2) /* same iter space */
        {
            var_30 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_7 - 2] [i_7] [i_7] [i_7 - 4] [i_7 - 2]))) != (3279565120U)));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_7] [i_7 - 4] [i_7 - 4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
            /* LoopNest 3 */
            for (unsigned char i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned short i_10 = 2; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */short) (unsigned char)229);
                            var_33 = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)45)))));
                            var_34 = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
            } 
        }
        for (short i_11 = 4; i_11 < 14; i_11 += 2) 
        {
            var_35 = ((/* implicit */_Bool) ((short) ((unsigned char) 1099503239168LL)));
            arr_34 [i_2] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9837))) & (((unsigned long long int) arr_0 [i_2 - 1]))));
        }
        arr_35 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_2 + 1] [i_2 + 1])) & (((/* implicit */int) (_Bool)1))));
        var_36 *= ((/* implicit */short) ((((/* implicit */int) ((arr_6 [i_2] [i_2]) != (((/* implicit */long long int) var_5))))) + (((((/* implicit */int) (unsigned char)60)) << (((arr_8 [i_2] [(unsigned char)12]) - (6565560502852631048LL)))))));
    }
    for (unsigned int i_12 = 1; i_12 < 14; i_12 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)230)), (8U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))))) >> (((var_7) - (2064256171U)))));
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 4564369501362740555ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3279565100U)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_0 [i_12 + 2])))))));
    }
}

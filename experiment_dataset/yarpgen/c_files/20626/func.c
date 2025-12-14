/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20626
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_15 &= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) ((((/* implicit */_Bool) max((-7053102783393538823LL), (((/* implicit */long long int) arr_1 [i_1]))))) || (((/* implicit */_Bool) max(((unsigned short)48205), (((/* implicit */unsigned short) (_Bool)1))))))))))));
            arr_5 [i_1] = ((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0 + 2]);
            var_17 &= ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */long long int) 4294967286U)) & (var_0)))) ? (min((arr_3 [i_0 + 2]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) min((((/* implicit */int) var_4)), (arr_1 [i_0 - 1]))))));
        }
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            var_18 = ((/* implicit */_Bool) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [14U]))))), (arr_6 [i_0 - 1])))));
            var_19 = ((/* implicit */int) var_11);
            var_20 = ((/* implicit */short) (_Bool)1);
        }
        for (int i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_3)) == (max((((/* implicit */int) var_3)), (arr_4 [i_3])))))) * (max((arr_6 [i_0 - 2]), (((/* implicit */int) (unsigned char)128))))));
            arr_11 [i_0 + 1] [i_3] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_0 - 1])) == (max((var_2), (((/* implicit */long long int) (_Bool)1))))))) > (min((arr_1 [i_0 + 1]), (((/* implicit */int) (_Bool)1))))));
            var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [14LL] [i_3 - 2])) ? (-4998847042147048943LL) : (((/* implicit */long long int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))));
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_23 = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) ((int) -18))), ((-(2734651331U))))));
            arr_15 [10U] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4998847042147048943LL)) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_4])) : (2590838530U))), (min((((/* implicit */unsigned int) ((arr_7 [i_0] [(unsigned char)5] [i_0]) != (1704128755U)))), (((unsigned int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            var_24 = ((/* implicit */int) ((max((arr_3 [i_0 + 2]), (((/* implicit */long long int) var_11)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))) : (1704128767U))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_25 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_2))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -1376289857)) >= (4998847042147048943LL)))))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (long long int i_8 = 3; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (unsigned short)8064);
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_5] [i_5]);
                        var_28 = ((/* implicit */unsigned int) (+(var_5)));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) / (2734651331U)));
        arr_29 [i_9] = ((/* implicit */_Bool) 40469215);
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (_Bool)1)), (2064384U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((4611681620380876800LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_31 = ((/* implicit */_Bool) var_5);
        arr_33 [i_10] = ((/* implicit */_Bool) (+(1403559235904220231ULL)));
        var_32 = ((/* implicit */int) ((short) 4998847042147048926LL));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_41 [i_11] [(_Bool)1] [20LL] = ((/* implicit */_Bool) 4998847042147048945LL);
                    arr_42 [i_11] [i_12] [i_13] |= ((/* implicit */unsigned short) (_Bool)1);
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -2)) | (((unsigned int) ((unsigned char) arr_38 [i_11] [i_11] [(signed char)14])))));
                    var_34 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (-4998847042147048943LL))))) & (562949953421312LL))));
                }
            } 
        } 
        arr_43 [i_11] = ((/* implicit */unsigned short) (signed char)5);
    }
    var_35 = ((/* implicit */unsigned short) ((var_2) ^ (min(((-(var_0))), (((/* implicit */long long int) 2588073685U))))));
    var_36 = ((/* implicit */int) ((((((/* implicit */_Bool) 1704128766U)) ? (((/* implicit */long long int) 2064392U)) : (min((4358903883867843214LL), (((/* implicit */long long int) (unsigned char)128)))))) != (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (4998847042147048943LL))), (var_2)))));
    var_37 = ((/* implicit */unsigned short) var_9);
}

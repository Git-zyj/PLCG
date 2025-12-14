/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25982
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)209)))), (min((((((/* implicit */int) var_10)) >> (0ULL))), (((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_1))))))));
    var_13 = ((/* implicit */unsigned long long int) var_8);
    var_14 |= ((/* implicit */unsigned char) ((((min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_11)))))) + (2147483647))) >> (((max((var_3), (var_0))) & (min((10ULL), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(unsigned char)10] [i_0 - 3] [i_1 + 1])) - (((/* implicit */int) arr_4 [(_Bool)1] [(signed char)0] [i_1 + 1])))))));
            var_16 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
            var_17 = (unsigned char)224;
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2 + 1])) > (((/* implicit */int) arr_6 [i_0 + 1] [i_0]))))), (arr_4 [i_0] [i_0 - 3] [i_2 + 1])));
            var_19 = ((/* implicit */_Bool) min((min((35184372088831ULL), (((9ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [7ULL] [i_0] [i_2 + 1]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
            var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) min((arr_8 [i_0]), (arr_4 [i_0] [i_0 - 3] [(_Bool)1])))) & (((/* implicit */int) (unsigned char)52))))));
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) arr_2 [i_2 + 1] [i_0] [i_0 - 3])))))) != (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0 - 2])), (arr_5 [i_0] [i_0])))))), (min((((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_0] [i_2 + 1])), (max((((/* implicit */unsigned char) arr_3 [i_2] [i_0] [i_0 - 3])), (arr_2 [i_0] [i_0] [i_2])))))));
            arr_9 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_0]);
        }
        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned char)44), ((unsigned char)161)))), (max((((/* implicit */unsigned long long int) max(((unsigned char)206), (((/* implicit */unsigned char) arr_6 [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 + 1] [i_0 - 3])), (arr_0 [i_0])))))));
        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0] [i_0 + 1]))) == (4780001556744039954ULL)))) * (((/* implicit */int) min((arr_3 [i_0 - 4] [i_0] [i_0]), (((/* implicit */signed char) arr_6 [i_0] [i_0]))))))), (((/* implicit */int) arr_7 [i_0] [i_0 - 3] [i_0 - 2]))));
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 2] [i_0])), (35184372088845ULL)));
    }
    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]);
        /* LoopSeq 4 */
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            var_25 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_13 [i_3]), (((/* implicit */unsigned char) (signed char)61))))), (max((arr_0 [i_3]), (14531652694638325970ULL)))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3])) || (((/* implicit */_Bool) (unsigned char)31))))), (arr_7 [i_3] [i_4 + 1] [i_4])))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_3])), (3604000718041336392ULL))))))));
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_4 + 1])) != (((/* implicit */int) arr_4 [i_3] [i_3 + 2] [i_4 - 1]))));
                    arr_24 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3]))))) || (((/* implicit */_Bool) (unsigned char)128))));
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_8 [i_5]), (((/* implicit */unsigned char) arr_7 [i_3] [i_4 - 1] [i_3]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)203)), (18446708889337462771ULL))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_29 = ((/* implicit */_Bool) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))) >> (((((/* implicit */int) min(((unsigned char)44), (arr_26 [i_3 + 3] [i_4 + 1] [(unsigned char)5] [i_7])))) - (40))))), (max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (unsigned char)116)) >> (((/* implicit */int) arr_10 [i_3] [i_3]))))))));
                arr_29 [i_3 + 2] [i_3 + 2] [i_3] [i_7] = ((/* implicit */unsigned char) arr_18 [i_3] [i_7]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                arr_33 [i_3] [12ULL] [i_8] [i_8] = ((/* implicit */unsigned char) arr_30 [i_3] [i_4] [i_4 + 1] [i_3 + 1]);
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)11)) - (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_3] [i_3])), ((unsigned char)5))))));
                var_31 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) max((arr_13 [i_3]), (arr_1 [i_3 + 1] [i_3])))))), (((/* implicit */int) (unsigned char)252))));
            }
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                arr_36 [i_3] = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned long long int) (_Bool)0)), (35184372088862ULL))), (((/* implicit */unsigned long long int) (unsigned char)224)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)229)), (((((/* implicit */int) (unsigned char)43)) - (((/* implicit */int) (_Bool)1)))))))));
                var_32 &= ((/* implicit */unsigned char) 6291456ULL);
                var_33 &= max((((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_21 [10ULL] [i_4] [i_4] [i_4] [(signed char)0] [10ULL])))), ((!(((/* implicit */_Bool) (signed char)109))))))), (min((18446708889337462755ULL), (((/* implicit */unsigned long long int) arr_26 [i_3 + 3] [i_4 - 1] [i_9 + 1] [1ULL])))));
            }
            var_34 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-64)))), (((((/* implicit */int) arr_10 [i_3] [i_3])) >> (((((/* implicit */int) (signed char)-70)) + (76)))))))));
        }
        for (signed char i_10 = 3; i_10 < 16; i_10 += 3) /* same iter space */
        {
            arr_40 [i_3] [i_10 - 1] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((unsigned char)48), (arr_22 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_10] [i_10]))), (((/* implicit */unsigned char) arr_19 [i_3 + 2] [i_3 + 3] [i_10 - 1] [i_10 - 3])))))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [(unsigned char)12] [i_10 + 1] [i_10 - 2])) & (((/* implicit */int) (unsigned char)27))))), (min((((/* implicit */unsigned long long int) (signed char)-70)), (262136ULL)))))));
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)85)), ((-(((arr_39 [i_3 - 1] [i_10 - 1]) - (4119557682871539082ULL))))))))));
            var_36 = ((/* implicit */signed char) arr_1 [i_3] [i_3]);
            var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), (arr_26 [i_10 - 3] [i_3 + 1] [i_3 - 1] [i_3])));
        }
        for (signed char i_11 = 3; i_11 < 16; i_11 += 3) /* same iter space */
        {
            arr_44 [i_3] [i_3] = ((/* implicit */_Bool) min((arr_25 [i_3 + 1] [i_3] [(unsigned char)13] [i_11]), (min((min((((/* implicit */unsigned long long int) arr_30 [i_3] [i_3 + 1] [(signed char)2] [i_11 - 2])), (arr_5 [i_3] [i_11]))), (arr_25 [i_3] [i_3] [i_3] [i_3])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                arr_48 [i_3] [i_3 + 1] [i_3] [i_12] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((arr_46 [i_3 + 3] [i_11 - 3]) >= (arr_0 [i_3])))), (min((arr_18 [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned char)11)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_3 + 1] [i_3 + 1] [(signed char)6])) && (((/* implicit */_Bool) 10618065355593620573ULL))))), (max(((unsigned char)38), ((unsigned char)237))))))));
                var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12]))) - (arr_42 [i_3 - 1] [i_3 + 2] [i_11 + 1]))))));
            }
            arr_49 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)64);
        }
        for (signed char i_13 = 3; i_13 < 16; i_13 += 3) /* same iter space */
        {
            arr_52 [(unsigned char)12] [(_Bool)1] [i_3 + 3] |= ((/* implicit */signed char) (unsigned char)62);
            arr_53 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_3] [i_3 - 1])) && (((arr_28 [i_3 - 1] [(unsigned char)5] [i_3 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3])))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 10618065355593620573ULL)) || (((/* implicit */_Bool) (unsigned char)28)))))));
            arr_54 [i_3 + 2] [i_3] [i_13 - 2] = ((/* implicit */signed char) min((((min((arr_20 [i_3] [i_3 - 1] [i_13] [(unsigned char)9]), (((/* implicit */unsigned long long int) arr_51 [i_3 + 1] [i_13 - 1] [i_3])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_51 [i_13] [i_13 - 2] [i_13]), (((/* implicit */unsigned char) (signed char)-89)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)72)) % (((/* implicit */int) arr_15 [i_3] [i_13] [i_13 - 3]))))) && (((arr_28 [(_Bool)1] [(unsigned char)10] [i_13 - 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_3 + 1] [i_13 - 2] [i_13 - 2]))))))))));
            arr_55 [i_3 - 1] [i_3] = ((/* implicit */unsigned char) arr_11 [i_3]);
        }
    }
    var_39 = min((((/* implicit */unsigned long long int) (unsigned char)13)), (max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (signed char)-127)), (var_3))))));
}

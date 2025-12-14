/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((-18818 + 2147483647) << (((-1 + 17) - 16))))) ? -59 : (((~-12969) * ((5245 ? 1 : 60265))))));
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_21 = -48;
                    var_22 = (87 ? (((!(~232)))) : -1);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_23 = -3566;
                        var_24 = (60116 >= 9195);
                        var_25 = (((((3413928935 ? -31409 : 676792548))) ? -4559103533951411991 : -30));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_26 += (~20176);
                        var_27 = (2170845786497113339 / 15020);
                        var_28 ^= 91;
                        var_29 ^= -14555;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_30 |= ((-(~1)));
                        var_31 = (((((4017562143 ? (316419809 - 8816562958305070033) : 16966))) ? (((191884675 < ((((-15 + 2147483647) >> (316419791 - 316419774))))))) : (-6340122556123389736 / -83)));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_32 ^= (~12692311284804465808);

                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_33 ^= (((!-109) ? 6006488043048103641 : -522291051));
                            var_34 += 1830699461;
                            var_35 = (max(var_35, (((-1264 <= (191884651 > 15859137979651784026))))));
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            var_36 ^= (4036317128 / -3151);
                            var_37 = 21;
                        }
                    }
                    var_38 = -810273369927256247;
                }
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    var_39 = ((!(((110 >> (-9808 + 9830))))));
                    var_40 |= (~27571);
                    var_41 = ((!(7105347891342163969 - 31387)));
                }
                var_42 ^= (+-1);
                var_43 = (((1 ? 0 : 4684936036884761874)));
            }
        }
    }
    #pragma endscop
}
